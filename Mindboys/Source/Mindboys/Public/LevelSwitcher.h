// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Kismet/GameplayStatics.h"

/**
 * 
 */
namespace MINDBOYS_API LevelSwitcher
{
public:
    
    void LoadLevel(FName LevelToLoad); //Load a given level
    
    void UnloadLevel(FName LevelToUnload); //Unload a given level
};
