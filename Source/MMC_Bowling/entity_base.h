/*
Purpose: a base class which extends the actor class to provide more basic functionalities that the actor class doesn't have:
	Use() and OnUse() function and event, respectively
	Teleportation back to spawn
	Spawn relocation
	Health/death system
	Iterating functions for finding other actors and entities by name via info_target
	RootComponent is a StaticMeshComponent

@author Michael Trunk
*/
#pragma once
#include "MMC_Bowling.h"
#include "GameFramework/Actor.h"
#include "info_target.h"
#include "util_debug.h"
#include "MMC_Shared.h"
#include "entity_base.generated.h"

UCLASS()
class MMC_BOWLING_API Aentity_base : public AActor
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "entity_base")
		UStaticMeshComponent* EntityModel = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EntityModel"));

	//Initial world transform of the entity - set in OnBeginPlay()
	FVector OriginalLocation;
	FRotator OriginalRotation;

	//Whether or not to toggle model visibility on BeginPlay
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "entity_base")
		bool bToggleVisibilityOnStart = false;

	// Sets default values for this actor's properties
	Aentity_base();
	//~Aentity_base();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaSeconds) override;

	//If specified, spawns the entity_base at this target instead of here
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "entity_base")
		FName spawnTargetName = TEXT("");

	//If specified, entity will teleport to this target on TeleportToTarget(...)
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "entity_base")
		FName teleportTargetName = TEXT("");

	UFUNCTION(BlueprintCallable, Category = "entity_base")
		void TeleportToTarget();

	//Initial Health Property
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "entity_base")
		float initialHealth = 100;

	//Health Property
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "entity_base")
		float health = 100;

	//isDead Property
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "entity_base")
		bool isDead = false;

	//Boolean for whether or not we should destroy the actor 
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "entity_base")
		bool destroyOnDeath = false;

	//Float for time delay before destroying after death
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "entity_base")
		float deathDelay = 0;

	//Running clock for checking if we need to destroy this entity
	float deathTime = 0;

	//Function for modifying health
	UFUNCTION(BlueprintCallable, Category = "entity_base")
		virtual void CalculateHealth(float delta);

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

	//All-purpose extensible use function
	UFUNCTION(BlueprintCallable, Category = "entity_base")
		virtual void Use();

	//Whether or not to allow player to press/use. Child classes must check it themselves
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "entity_base")
		bool bIgnoreUse = true;

	//Extensible use event. Called at the end of Use() function
	UFUNCTION(BlueprintImplementableEvent, Category = "entity_base")
		void OnUse();

	UFUNCTION(BlueprintImplementableEvent, Category = "entity_base")
		void OnKilled();

	//Resets the object to its starting location and starting rotation
	UFUNCTION(BlueprintCallable, Category = "entity_base")
		void ResetWorldTransform();

	//Given a name, finds the actor in the world. Can return nullptr
	UFUNCTION(BlueprintCallable, Category = "entity_base")
		static AActor *FindActorByName(FName targetName, UObject* WorldContextObject);

	//Given a name, finds the entity in the world. Can return nullptr so don't use without checking.
	UFUNCTION(BlueprintCallable, Category = "entity_base")
		Aentity_base *FindEntityByName(FName targetName);

	//Given an actor, returns the transform from this target to the given actor
	UFUNCTION(BlueprintCallable, Category = "entity_base")
		FTransform GetTransformToActor(AActor *fromActor);

	//Given an actor, returns the vector offset from this target to the given actor
	UFUNCTION(BlueprintCallable, Category = "entity_base")
		FVector GetOffsetToActor(AActor *fromActor);
	

};
