#pragma once
#include "Player.h"

class APlayer;
class AMonster;

class UWorld
{
public:
	UWorld();
	UWorld(int InWildBoarCounts, int InGoblinCounts, int InSlimeCounts);
	void Process();
	void Render();
	~UWorld();

private:
	int WildBoarCounts;
	int GoblinCounts;
	int SlimeCounts;
	int MonsterCounts;

	APlayer* Player;
	AMonster** Monsters;
};

