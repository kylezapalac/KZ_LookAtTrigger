// Copyright Epic Games, Inc. All Rights Reserved.

#include "KZ_LookAtSensorCPPCharacter.h"
#include "KZ_LookAtSensorCPPProjectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "MotionControllerComponent.h"
#include "XRMotionControllerBase.h"
#include "DrawDebugHelpers.h" // ADDED BY KZ

//////////////////////////////////////////////////////////////////////////
// AKZ_LookAtSensorCPPCharacter

AKZ_LookAtSensorCPPCharacter::AKZ_LookAtSensorCPPCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// set our turn rates for input
	TurnRateGamepad = 50.f;

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-39.56f, 1.75f, 64.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->SetRelativeRotation(FRotator(1.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-0.5f, -4.4f, -155.7f));

}

// ADDED BY KZ
void AKZ_LookAtSensorCPPCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime); // CALLING TICK FUNCTIONALITY FROM PARENT CLASS TO MAINTAIN FUNCTIONALITY

	// TESTING
	// GEngine->AddOnScrecenterebugMessage(-1, 1.0f, FColor::Emerald, TEXT("HELLO"));

	// GET ACTOR LOCATION, GET SENSOR LOCATION, DRAW LINE BETWEEN THEM
	FVector playerPos = GetLocation();
	FVector center = GetSensorLocation();
	DrawDebugLine(GetWorld(), playerPos, center, FColor::Cyan, false, 0.25f);
	
	// GET VECTOR IN DIRECTION THAT PLAYER IS LOOKING
	FVector playerForward = GetForward();

	// **** IMPLEMENT DOT PRODUCT MATH ****

	// FIRST VECTOR (VECTOR IN DIRECTION PLAYER IS LOOKING)
	FVector playerLookDir = playerForward;
	playerLookDir.Normalize(); // NORMALIZE FOR DP, OTHERWISE THRESHOLD IS IMPACTED BY OUR DISTANCE TO TARGET

	// SECOND VECTOR (VECTOR FROM PLAYER TO CENTER OF SENSOR)
	FVector playerToTriggerDir = center - playerPos; 
	playerToTriggerDir.Normalize(); // NORMALIZE FOR DP, OTHERWISE THRESHOLD IS IMPACTED BY OUR DISTANCE TO TARGET
	
	// ACCEPTANCE CRITERIA FOR BEING ON TARGET
	float preciseness = 0.99f;
	
	// DOT PRODUCT
	float lookness = FVector::DotProduct(playerToTriggerDir, playerLookDir);

	// PRINT DOTPRODUCT TO OUTPUT LOG FOR VERIFICATION
	UE_LOG(LogTemp, Warning, TEXT("Dot Product: %f"), lookness);

	// BOOL BASED ON IF WE ARE "LOOKING" OR NOT
	bool isLooking = lookness >= preciseness;

	// LOGIC FOR DETERMINING IF WE ARE ON TARGET AND CHANGING LINE COLOR ACCORDINGLY
	if (isLooking) DrawDebugLine(GetWorld(), playerPos, playerPos + playerForward * lineDistance, FColor::Green, false, 0.25f);
	else DrawDebugLine(GetWorld(), playerPos, playerPos + playerForward * lineDistance, FColor::Red, false, 0.25f);

}
/////////////////////////////

void AKZ_LookAtSensorCPPCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

}

// ADDED BY KZ
FVector AKZ_LookAtSensorCPPCharacter::GetLocation()
{
	return FirstPersonCameraComponent->GetComponentLocation();
	//return GetActorLocation(); // THIS IS OUR LOCATION
	//return FPWeapon->GetComponentLocation(); // GUN LOCATION (FOR LAZER BEAM SHOOTING OUT OF GUN) 
	// FP_Gun doesn't exist in the UE5 Template. I found TP_WeaponComponent but it isn't clear how I get the muzzle 
}

FVector AKZ_LookAtSensorCPPCharacter::GetForward()
{
	return FirstPersonCameraComponent->GetForwardVector();
	//return GetActorForwardVector();
	//return FPWeapon->GetForwardVector(); // GUN LOCATION (FOR LAZER BEAM SHOOTING OUT OF GUN) 
	//return FP_Gun->GetForwardVector(); // GUN VECTOR (FOR LAZER BEAM SHOOTING OUT OF GUN)
}

FVector AKZ_LookAtSensorCPPCharacter::GetSensorLocation()
{
	return actor->GetActorLocation(); // THIS IS THE LOCATION OF THE SENSOR
}

FVector AKZ_LookAtSensorCPPCharacter::GetSensorForward()
{
	return actor->GetActorForwardVector(); // SENSOR VECTOR
}
/////////////////////////////
 
//////////////////////////////////////////////////////////////////////////// Input

void AKZ_LookAtSensorCPPCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);

	// Bind jump events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	// Bind fire event
	PlayerInputComponent->BindAction("PrimaryAction", IE_Pressed, this, &AKZ_LookAtSensorCPPCharacter::OnPrimaryAction);

	// Enable touchscreen input
	EnableTouchscreenMovement(PlayerInputComponent);

	// Bind movement events
	PlayerInputComponent->BindAxis("Move Forward / Backward", this, &AKZ_LookAtSensorCPPCharacter::MoveForward);
	PlayerInputComponent->BindAxis("Move Right / Left", this, &AKZ_LookAtSensorCPPCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "Mouse" versions handle devices that provide an absolute delta, such as a mouse.
	// "Gamepad" versions are for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn Right / Left Mouse", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("Look Up / Down Mouse", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("Turn Right / Left Gamepad", this, &AKZ_LookAtSensorCPPCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("Look Up / Down Gamepad", this, &AKZ_LookAtSensorCPPCharacter::LookUpAtRate);
}

void AKZ_LookAtSensorCPPCharacter::OnPrimaryAction()
{
	// Trigger the OnItemUsed Event
	OnUseItem.Broadcast();
}

void AKZ_LookAtSensorCPPCharacter::BeginTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == true)
	{
		return;
	}
	if ((FingerIndex == TouchItem.FingerIndex) && (TouchItem.bMoved == false))
	{
		OnPrimaryAction();
	}
	TouchItem.bIsPressed = true;
	TouchItem.FingerIndex = FingerIndex;
	TouchItem.Location = Location;
	TouchItem.bMoved = false;
}

void AKZ_LookAtSensorCPPCharacter::EndTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == false)
	{
		return;
	}
	TouchItem.bIsPressed = false;
}

void AKZ_LookAtSensorCPPCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void AKZ_LookAtSensorCPPCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void AKZ_LookAtSensorCPPCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * TurnRateGamepad * GetWorld()->GetDeltaSeconds());
}

void AKZ_LookAtSensorCPPCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * TurnRateGamepad * GetWorld()->GetDeltaSeconds());
}

bool AKZ_LookAtSensorCPPCharacter::EnableTouchscreenMovement(class UInputComponent* PlayerInputComponent)
{
	if (FPlatformMisc::SupportsTouchInput() || GetDefault<UInputSettings>()->bUseMouseForTouch)
	{
		PlayerInputComponent->BindTouch(EInputEvent::IE_Pressed, this, &AKZ_LookAtSensorCPPCharacter::BeginTouch);
		PlayerInputComponent->BindTouch(EInputEvent::IE_Released, this, &AKZ_LookAtSensorCPPCharacter::EndTouch);

		return true;
	}
	
	return false;
}
