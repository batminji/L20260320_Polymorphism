#pragma once
#include "Player.h"

class APlayer;
class AMonster;

class UWorld
{
public:
	UWorld();
	UWorld(int WildBoarCounts, int GoblinCounts, int SlimeCounts);
	void Process();
	void Render();
	~UWorld();

	int MonsterCounts;
	int WildBoarCounts;
	int GoblinCounts;
	int SlimeCounts;

	APlayer* Player;
	AMonster** Monsters;
};

