// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"


void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    PrintLine(TEXT("Welcome to Bull Cows!"));  // PrintLine is for print any words we want in the game
    PrintLine(TEXT("Guess the 4 letter word!")); 
    PrintLine(TEXT("Press enter to continue..."));
    HiddenWord = TEXT("cake");
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();    
    //FString HiddenWord = TEXT("cake");
   if (Input == HiddenWord)
   {
       PrintLine(TEXT("You have won!"));
   }
   else
   {
       PrintLine(TEXT("You have lost!"));
   }
}