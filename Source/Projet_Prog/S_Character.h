// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "S_Character.generated.h"

UCLASS()
class PROJET_PROG_API AS_Character : public ACharacter
{
	GENERATED_BODY()

	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category ="Camera", meta =(AllowPrivateAccess =  true))
	UCameraComponent*CameraComponent;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="CharacterMesh", meta = (AllowPrivateAccess=true))
	USkeletalMeshComponent* SkeletalMeshComponent;
public:
	// Sets default values for this character's properties
	AS_Character();
	UCameraComponent*GetFirstPersonCameraComponent() const {return CameraComponent;}
	USkeletalMeshComponent*GetSkeletalMeshComponent() const {return SkeletalMeshComponent;}

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction*IA_Jump;
	
	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* IA_Sprint;
	
	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* IA_Move;
	
	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction*IA_Look;
	
	
	
	

protected:
	
	void Move(const FInputActionValue&Value);
	void Look ( const FInputActionValue&Value);
	void OnStartJumping(const FInputActionValue&Value);
	void OnStopJumping(const FInputActionValue&Value);
	void OnStartSprinting(const FInputActionValue&Value);
	void OnStopSprinting(const FInputActionValue&Value);
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
