

#include "S_Character.h"

AS_Character::AS_Character()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AS_Character::BeginPlay()
{
	Super::BeginPlay();
	
}

/*void AS_Character::Move(const FInputActionValue& Value)
{
	if (GetController)
	{
		AddMovementInput(GetActorRightVector(), Right);
	}
}*/

void AS_Character::Look(const FInputActionValue& Value)
{
}

void AS_Character::OnStartJumping(const FInputActionValue& Value)
{
	Jump();
}

void AS_Character::OnStopJumping(const FInputActionValue& Value)
{
	StopJumping();
}

void AS_Character::OnStartSprinting(const FInputActionValue& Value)
{
}

void AS_Character::OnStopSprinting(const FInputActionValue& Value)
{
}

// Called every frame
void AS_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AS_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

