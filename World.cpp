#include "stdafx.h"

#include "World.h"
#include "Actor.h"
#include "Player.h"
#include "Monster.h"
#include "WildBoar.h"
#include "Goblin.h"
#include "Slime.h"

UWorld::UWorld()
	: PlayerCounts(1), WildBoarCounts(rand() % 10 + 1), GoblinCounts(rand() % 10 + 1), SlimeCounts(rand() % 10 + 1), ActorCounts(PlayerCounts + WildBoarCounts + GoblinCounts + SlimeCounts)
{
	for (int i = 0; i < PlayerCounts; ++i)
	{
		Actors.emplace_back(new APlayer());
	}
	for (int i = PlayerCounts; i < PlayerCounts + WildBoarCounts; ++i)
	{
		Actors.emplace_back(new AWildBoar());
	}
	for (int i = PlayerCounts + WildBoarCounts; i < PlayerCounts + WildBoarCounts + GoblinCounts; ++i)
	{
		Actors.emplace_back(new AGoblin());
	}
	for (int i = PlayerCounts + WildBoarCounts + GoblinCounts; i < PlayerCounts + WildBoarCounts + GoblinCounts + SlimeCounts; ++i)
	{
		Actors.emplace_back(new ASlime());
	}
}

UWorld::UWorld(const int InPlayerCounts, const int InWildBoarCounts, const int InGoblinCounts, const int InSlimeCounts)
	: PlayerCounts(InPlayerCounts), WildBoarCounts(InWildBoarCounts), GoblinCounts(InGoblinCounts), SlimeCounts(InSlimeCounts), ActorCounts(PlayerCounts + WildBoarCounts + GoblinCounts + SlimeCounts)
{
	for (int i = 0; i < PlayerCounts; ++i)
	{
		Actors.emplace_back(new APlayer());
	}
	for (int i = PlayerCounts; i < PlayerCounts + WildBoarCounts; ++i)
	{
		Actors.emplace_back(new AWildBoar());
	}
	for (int i = PlayerCounts + WildBoarCounts; i < PlayerCounts + WildBoarCounts + GoblinCounts; ++i)
	{
		Actors.emplace_back(new AGoblin());
	}
	for (int i = PlayerCounts + WildBoarCounts + GoblinCounts; i < PlayerCounts + WildBoarCounts + GoblinCounts + SlimeCounts; ++i)
	{
		Actors.emplace_back(new ASlime());
	}
}

void UWorld::Tick()
{
	for (auto& ActorRef : Actors)
	{
		ActorRef->Tick();
	}
}

void UWorld::Render()
{
	for (const auto& ActorRef : Actors)
	{
		ActorRef->Render();
	}
}

UWorld::~UWorld()
{
	for (auto& ActorRef : Actors)
	{
		delete ActorRef;
		ActorRef = nullptr;
	}
	Actors.clear();
}
