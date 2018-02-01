// Fill out your copyright notice in the Description page of Project Settings.

#include "LevelSwitcher.h"

namespace LevelSwitcher{

    void LoadLevel(FName LevelToLoad){
    
        if(LevelToLoad == "") return; //Saftey check to make sure LevelToLoad exists
    
        FLatentActionInfo LatentInfo; //Structure holding data about the the latent action
        UGameplayStatistics::LoadStreamLevel(this, LevelToLoad, true, true, LatentInfo); //Start working on loading the level
    
    }

    void UnloadLevel(FName LevelToUnload){
    
        if(LevelToUnload == "") return; //Saftey check to make sure LevelToUnload exists
    
        FLatentActionInfo LatentInfo; //Structure holding data about the latent action
        UGameplayStatistics::UnloadStreamLevel(this, LevelToUnload, LatentInfo); //Start working on unloading the level
    
    }
}
