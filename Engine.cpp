#include "Engine.h"
#include "World.h"

UEngine::UEngine()
{
	Initialize();
}

void UEngine::Initialize()
{
	World = new UWorld();
}

void UEngine::Run()
{
	// Game Loop
	while (true)
	{
		Input();
		Tick();
		Render();
	}
}

void UEngine::Terminate()
{
	delete World;
	World = nullptr;
}

void UEngine::Input()
{
}

void UEngine::Tick()
{
	World->Process();
}

void UEngine::Render()
{
	World->Render();
}

UEngine::~UEngine()
{
	Terminate();
}
