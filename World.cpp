#include "stdafx.h"

#include "World.h"
#include "Actor.h"
#include "Player.h"
#include "Monster.h"
#include "WildBoar.h"
#include "Goblin.h"
#include "Slime.h"


UWorld::UWorld()
	: PlayerCounts(1), WildBoarCounts(rand() % 10 + 1), GoblinCounts(rand() % 10 + 1), SlimeCounts(rand() % 10 + 1), ActorCounts(WildBoarCounts + GoblinCounts + SlimeCounts)
{
	Actors = new AActor* [ActorCounts];
	for (int i = 0; i < PlayerCounts; ++i)
	{
		Actors[i] = new APlayer();
	}
	for (int i = PlayerCounts; i < PlayerCounts + WildBoarCounts; ++i)
	{
		Actors[i] = new AWildBoar();
	}
	for (int i = PlayerCounts + WildBoarCounts; i < PlayerCounts + WildBoarCounts + GoblinCounts; ++i)
	{
		Actors[i] = new AGoblin();
	}
	for (int i = PlayerCounts + WildBoarCounts + GoblinCounts; i < PlayerCounts + WildBoarCounts + GoblinCounts + SlimeCounts; ++i)
	{
		Actors[i] = new ASlime();
	}
}

UWorld::UWorld(int InPlayerCounts, int InWildBoarCounts, int InGoblinCounts, int InSlimeCounts)
	: PlayerCounts(InPlayerCounts), WildBoarCounts(InWildBoarCounts), GoblinCounts(InGoblinCounts), SlimeCounts(InSlimeCounts), ActorCounts(WildBoarCounts + GoblinCounts + SlimeCounts)
{
	Actors = new AActor * [ActorCounts];
	for (int i = 0; i < PlayerCounts; ++i)
	{
		Actors[i] = new APlayer();
	}
	for (int i = PlayerCounts; i < PlayerCounts + WildBoarCounts; ++i)
	{
		Actors[i] = new AWildBoar();
	}
	for (int i = PlayerCounts + WildBoarCounts; i < PlayerCounts + WildBoarCounts + GoblinCounts; ++i)
	{
		Actors[i] = new AGoblin();
	}
	for (int i = PlayerCounts + WildBoarCounts + GoblinCounts; i < PlayerCounts + WildBoarCounts + GoblinCounts + SlimeCounts; ++i)
	{
		Actors[i] = new ASlime();
	}
}

void UWorld::Process()
{
	for (int i = 0; i < ActorCounts; ++i)
	{
		Actors[i]->Move();
	}
}

void UWorld::Render()
{
	for (int i = 0; i < ActorCounts; ++i)
	{
		Actors[i]->Render();
	}
}

UWorld::~UWorld()
{
	for (int i = 0; i < ActorCounts; ++i)
	{
		delete Actors[i];
		Actors[i] = nullptr;
	}
	delete[] Actors;
	Actors = nullptr;
}
