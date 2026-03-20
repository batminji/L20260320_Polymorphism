#include "stdafx.h"

#include "World.h"
#include "Monster.h"
#include "WildBoar.h"
#include "Goblin.h"
#include "Slime.h"


UWorld::UWorld()
	: WildBoarCounts(rand() % 10 + 1), GoblinCounts(rand() % 10 + 1), SlimeCounts(rand() % 10 + 1), MonsterCounts(WildBoarCounts + GoblinCounts + SlimeCounts)
{
	Player = new APlayer();

	Monsters = new AMonster * [MonsterCounts];
	for (int i = 0; i < WildBoarCounts; ++i)
	{
		Monsters[i] = new AWildBoar();
	}
	for (int i = WildBoarCounts; i < WildBoarCounts + GoblinCounts; ++i)
	{
		Monsters[i] = new AGoblin();
	}
	for (int i = WildBoarCounts + GoblinCounts; i < WildBoarCounts + GoblinCounts + SlimeCounts; ++i)
	{
		Monsters[i] = new ASlime();
	}
}

UWorld::UWorld(int InWildBoarCounts, int InGoblinCounts, int InSlimeCounts)
	: WildBoarCounts(InWildBoarCounts), GoblinCounts(InGoblinCounts), SlimeCounts(InSlimeCounts), MonsterCounts(WildBoarCounts + GoblinCounts + SlimeCounts)
{
	Player = new APlayer();

	Monsters = new AMonster*[MonsterCounts];
	for (int i = 0; i < WildBoarCounts; ++i)
	{
		Monsters[i] = new AWildBoar();
	}
	for (int i = WildBoarCounts; i < WildBoarCounts + GoblinCounts; ++i)
	{
		Monsters[i] = new AGoblin();
	}
	for (int i = WildBoarCounts + GoblinCounts; i < WildBoarCounts + GoblinCounts + SlimeCounts; ++i)
	{
		Monsters[i] = new ASlime();
	}
}

void UWorld::Process()
{
	Player->Move();

	for (int i = 0; i < MonsterCounts; ++i)
	{
		Monsters[i]->Move();
	}
}

void UWorld::Render()
{
	Player->Render();

	for (int i = 0; i < MonsterCounts; ++i)
	{
		Monsters[i]->Render();
	}
}

UWorld::~UWorld()
{
	delete Player;
	Player = nullptr;

	for (int i = 0; i < MonsterCounts; ++i)
	{
		delete Monsters[i];
		Monsters[i] = nullptr;
	}
	delete[] Monsters;
	Monsters = nullptr;
}
