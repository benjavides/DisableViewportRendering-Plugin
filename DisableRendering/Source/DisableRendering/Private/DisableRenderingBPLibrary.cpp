// Copyright Epic Games, Inc. All Rights Reserved.

#include "DisableRenderingBPLibrary.h"
#include "DisableRendering.h"
#include "Engine/GameViewportClient.h"
#include "Engine/Engine.h"

UDisableRenderingBPLibrary::UDisableRenderingBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

void UDisableRenderingBPLibrary::SetViewportRenderingEnabled(bool bEnable)
{
    if (UGameViewportClient* ViewportClient = GEngine->GameViewport)
    {
        ViewportClient->bDisableWorldRendering = !bEnable;
    }
}

