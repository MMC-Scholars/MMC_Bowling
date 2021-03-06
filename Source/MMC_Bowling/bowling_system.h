// This software is under partial ownership by The Ohio State University, 
//for it is a product of student employees. For official policy, see
//https://tco.osu.edu/wp-content/uploads/2013/09/PatentCopyrightPolicy.pdf 
//or contact The Ohio State University's Office of Legal Affairs
/*
Purpose: spawnable utility class which handles all of the calculations and interactions to score a bowling game.
	Also contains helper functions for interacting with the pins.
	Contains functions for getting string representations of the scores.
	Uses TArray of class bowling_frame to keep track of the scores.

@author Michael Trunk
*/

#pragma once

#include "GameFramework/Actor.h"
#include "bowling_pin.h"
#include "bowling_frame.h"
#include "bowling_highscore_t.h"
#include "bowling_shared.h"
#include "bowling_system.generated.h"

//enumerator for the score type, for getting the different type of scores
UENUM(BlueprintType)
enum ScoreType
{
	FirstThrow			UMETA(DisplayName = "FirstThrow"),
	SecondThrow			UMETA(DisplayName = "SecondThrow"),
	NativeScore			UMETA(DisplayName = "NativeScore"),
	AbsoluteNativeScore	UMETA(DisplayName = "AbsoluteNativeScore"),
	AbsoluteScore		UMETA(DisplayName = "AbsoluteScore")
};

//enumerator for the endgame type. This is determined by the scores of the last frames
UENUM(BlueprintType)
enum EndgameType
{
	Undetermined			UMETA(DisplayName = "Undetermined"),
	DefaultEnding			UMETA(DisplayName = "DefaultEnding"),
	SpareEnding			UMETA(DisplayName = "SpareEnding"),
	StrikeEnding	UMETA(DisplayName = "StrikeEnding"),
};

UCLASS()
class MMC_BOWLING_API Abowling_system : public AActor
{
	GENERATED_BODY()

private:
	//the number of the frame we're in, starting from 0
	int frameIndex;

	bool gameover;

public:
	UFUNCTION(BlueprintCallable, Category = "bowling_system")
		static void loadScoreTable(UPARAM(ref) TArray<FString> & loadedArray);

	UFUNCTION(BlueprintCallable, Category = "bowling_system")
		static void appendNewScore(int iScore, FName playerName);

	//The amount of spaces between a three-digit integer score and the player's name
		#define BOWLING_SCORE_INTERSPACES 3

	//Adds the necessary amount of spaces 
	UFUNCTION(BlueprintCallable, Category = "bowling_system")
		static FString formatScoreString(const FString& rawInputString);

private:

	//we have an array of 12 bowling frames that we'll use to score. The last 2 are only used if possible
	TArray<bowling_frame, FDefaultAllocator> Frames;
	#define NUMBER_OF_FRAMES 12 //this is used only to construct the array and for bounds checking

	//checks the last frames to determine the current endgame type
	void CalculateEndgameType();

	//Checks the last frames to determine if the game is over
	bool CheckForGameover();

	//calculates all of the absolute scores and absolute native scores for the frames
	void ReCalculateAbsoluteScores();

public:
	// Sets default values for this actor's properties
	Abowling_system();

	EndgameType endgameType;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaSeconds) override;


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "bowling_system")
		int strikeCount;

	//Returns true if the game is waiting for the user's first throw, false otherwise.
	UFUNCTION(BlueprintCallable, Category = "bowling_system")
		bool WaitingForFirstThrow() const;

	//Gets the number of fallen pins. Does NOT do scoring calculations.
	UFUNCTION(BlueprintCallable, Category = "bowling_system")
		int GetFallenPinCount() const;

	//Counts the fallen bowling pins, and calculates the score for the current frame.
	//handles the strike count and strike/spare bonuses
	UFUNCTION(BlueprintCallable, Category = "bowling_system")
		void CalculateScore();

	//Given a frame number and a score type, returns the desired integer score
	UFUNCTION(BlueprintCallable, Category = "bowling_system")
		int GetIntScoreOfFrame(int frameNumber, ScoreType type) const;

	//Given a frame number and a score type, returns a string representation of the score
	UFUNCTION(BlueprintCallable, Category = "bowling_system")
		FString GetStringScoreOfFrame(int frameNumber, ScoreType type) const;

	//Returns a string containing the scores of the all the frames
	UFUNCTION(BlueprintCallable, Category = "bowling_system")
		FString GetStringScoreOfGame() const;

	//Iterates through all of the pins and raises and lowers those which have not fallen
	UFUNCTION(BlueprintCallable, Category = "bowling_system")
		void RaiseAndLowerUnfallenPins();

	//Teleports all of the pins above their starting locations and lowers them onto the lane
	UFUNCTION(BlueprintCallable, Category = "bowling_system")
		void ResetAndLowerAllPins();

	//Resets all the scores of the game
	UFUNCTION(BlueprintCallable, Category = "bowling_system")
		void ResetGame();

	//Returns the total score for the game, i.e. the absolute score of the current frame.
	UFUNCTION(BlueprintCallable, Category = "bowling_system")
		int GetAbsoluteScore() const;

	//Gsets the enumerator EndGameType, either DefaultEnding, SpareEnding or StrikeEnding. If it hasn't been determined yet, returns Undetermined.
	//UFUNCTION(BlueprintCallable, Category = "bowling_system")
	EndgameType GsetEndgameType(EndgameType override = Undetermined, const int32 overrideType = OVERRIDE_TYPE_NULL);

	//Blueprint-able accesor for the most recently calculated EndgameType
	UFUNCTION(BlueprintCallable, Category = "bowling_system")
		EndgameType GetEndgameType();

	//Returns the number of the current frame, 1-12
	UFUNCTION(BlueprintCallable, Category = "bowling_system")
		int GetNumberOfCurrentFrame();

	UFUNCTION(BlueprintImplementableEvent, Category = "bowling_system")
		void OnStrike(int count);

	UFUNCTION(BlueprintImplementableEvent, Category = "bowling_system")
		void OnSpare();

	UFUNCTION(BlueprintImplementableEvent, Category = "bowling_system")
		void OnGameover();

	UFUNCTION(BlueprintCallable, Category = "bowling_system")
		bool GameIsOver() const { return gameover; }



};
