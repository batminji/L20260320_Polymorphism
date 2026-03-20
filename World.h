#pragma once
#include "Player.h"

class APlayer;
class AWildBoar;
class AGoblin;
class ASlime;

class UWorld
{
public:
	UWorld();
	UWorld(int WildBoarCounts, int GoblinCounts, int SlimeCounts);
	void Process();
	void Render();
	~UWorld();

	int WildBoarCounts;
	int GoblinCounts;
	int SlimeCounts;

	APlayer* Player;
	AWildBoar* WildBoars;
	AGoblin* Goblins;
	ASlime* Slimes;
};

