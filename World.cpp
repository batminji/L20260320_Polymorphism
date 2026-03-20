#include "World.h"
#include "Monster.h"
#include "WildBoar.h"
#include "Goblin.h"
#include "Slime.h"

#include <stdlib.h>

UWorld::UWorld()
{
	WildBoarCounts = rand() % 10 + 1;
	GoblinCounts = rand() % 10 + 1;
	SlimeCounts = rand() % 10 + 1;
	MonsterCounts = WildBoarCounts + GoblinCounts + SlimeCounts;

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

UWorld::UWorld(int WildBoarCounts, int GoblinCounts, int SlimeCounts)
	: WildBoarCounts(WildBoarCounts), GoblinCounts(GoblinCounts), SlimeCounts(SlimeCounts)
{
	Player = new APlayer();

	MonsterCounts = WildBoarCounts + GoblinCounts + SlimeCounts;
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
