#include "World.h"
#include "WildBoar.h"
#include "Goblin.h"
#include "Slime.h"

#include <stdlib.h>

UWorld::UWorld()
{
	WildBoarCounts = rand() % 10 + 1;
	GoblinCounts = rand() % 10 + 1;
	SlimeCounts = rand() % 10 + 1;

	Player = new APlayer();
	WildBoars = new AWildBoar*[WildBoarCounts]();
	Goblins = new AGoblin*[GoblinCounts]();
	Slimes = new ASlime*[SlimeCounts]();
}

UWorld::UWorld(int WildBoarCounts, int GoblinCounts, int SlimeCounts)
	: WildBoarCounts(WildBoarCounts), GoblinCounts(GoblinCounts), SlimeCounts(SlimeCounts)
{
	Player = new APlayer();
	WildBoars = new AWildBoar*[WildBoarCounts]();
	Goblins = new AGoblin*[GoblinCounts]();
	Slimes = new ASlime*[SlimeCounts]();
}

void UWorld::Process()
{
	Player->Move();

	for (int i = 0; i < WildBoarCounts; ++i)
	{
		WildBoars[i]->Move();
	}

	for (int i = 0; i < GoblinCounts; ++i)
	{
		Goblins[i]->Move();
	}

	for (int i = 0; i < SlimeCounts; ++i)
	{
		Slimes[i]->Move();
	}
}

void UWorld::Render()
{
	Player->Render();

	for (int i = 0; i < WildBoarCounts; ++i)
	{
		WildBoars[i]->Render();
	}

	for (int i = 0; i < GoblinCounts; ++i)
	{
		Goblins[i]->Render();
	}

	for (int i = 0; i < SlimeCounts; ++i)
	{
		Slimes[i]->Render();
	}
}

UWorld::~UWorld()
{
	delete Player;
	Player = nullptr;

	for (int i = 0; i < WildBoarCounts; ++i)
	{
		delete WildBoars[i];
		WildBoars[i] = nullptr;
	}
	delete[] WildBoars;
	WildBoars = nullptr;

	for (int i = 0; i < SlimeCounts; ++i)
	{
		delete Slimes[i];
		Slimes[i] = nullptr;
	}
	delete[] Slimes;
	Slimes = nullptr;

	for (int i = 0; i < GoblinCounts; ++i)
	{
		delete Goblins[i];
		Goblins[i] = nullptr;
	}
	delete[] Goblins;
	Goblins = nullptr;

	delete[] WildBoars;
	delete[] Slimes;
	delete[] Goblins;
}
