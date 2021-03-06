// This software is under partial ownership by The Ohio State University, 
//for it is a product of student employees. For official policy, see
//https://tco.osu.edu/wp-content/uploads/2013/09/PatentCopyrightPolicy.pdf 
//or contact The Ohio State University's Office of Legal Affairs.
/*
Purpose: a prop_move_base derived class which acts like a rotating door.
	Also contains options for rotating forever and starting on.

@author Michael Trunk
*/

#pragma once

#include "prop_move_base.h"
#include "prop_rotator.generated.h"

/**
 * 
 */
UCLASS()
class MMC_BOWLING_API Aprop_rotator : public Aprop_move_base
{
	GENERATED_BODY()

	
public:
	//Whether or not to rotate forever
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "prop_rotator")
		bool bRotateForever = false;

	//Whether or not to start rotating OnBeginPlay()
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "prop_rotator")
		bool bStartOn = false;

	//we'll have private and public copies of this so that we can keep the vector fixed
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "prop_rotator")
		FRotator InitialDeltaRotation = FRotator::ZeroRotator;
	
private:
	FRotator DeltaRotation;

public:
	//Constructor
	Aprop_rotator();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Call every frame
	virtual void Tick(float DeltaSeconds) override;

protected:
	//opening and closing processors, called from inside the tick function
	virtual void processOpen(float DeltaSeconds) override;
	virtual void processClose(float DeltaSeconds) override;

public:
	//Given a 0-1 lerp value, rotates the door between the starting location and the ending location
	UFUNCTION(BlueprintCallable, Category = "prop_rotator")
		virtual void SetPosition(float lerp) override;

	//Sets a new angular speed as movementSpeed
	UFUNCTION(BlueprintCallable, Category = "prop_move_base")
		virtual void SetSpeed(float newSpeed) override;

	//Given a period, calculates the the angular speed and then calls SetSpeed(...)
	UFUNCTION(BlueprintCallable, Category = "prop_move_base")
		virtual void SetPeriod(float newPeriod);

	//Accessor functions for booleans
	UFUNCTION(BlueprintCallable, Category = "prop_rotator")
		bool IsOpen() override;
	UFUNCTION(BlueprintCallable, Category = "prop_rotator")
		bool IsClosed() override;
	
	
	
};
