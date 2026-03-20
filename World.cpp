#include "World.h"
#include "WildBoar.h"
#include "Goblin.h"
#include "Slime.h"

UWorld::UWorld()
{
	Player = new APlayer();
	WildBoars = new AWildBoar[10]();
	Goblins = new AGoblin[10]();
	Slimes = new ASlime[10]();
}

void UWorld::Process()
{
	Player->AddActorLocalOffset();

	for (int i = 0; i < 10; ++i)
	{
		WildBoars[i].AddActorLocalOffset();
		Goblins[i].AddActorLocalOffset();
		Slimes[i].AddActorLocalOffset();
	}
}

void UWorld::Render()
{
	Player->Render();

	for (int i = 0; i < 10; ++i)
	{
		WildBoars[i].Render();
		Goblins[i].Render();
		Slimes[i].Render();
	}
}

UWorld::~UWorld()
{
	delete Player;
	delete[] WildBoars;
	delete[] Slimes;
	delete[] Goblins;

	Player = nullptr;
	WildBoars = nullptr;
	Slimes = nullptr;
	Goblins = nullptr;
}
