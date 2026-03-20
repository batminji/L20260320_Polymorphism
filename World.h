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
	void Process();
	void Render();
	~UWorld();

	APlayer* Player;
	AWildBoar* WildBoars;
	AGoblin* Goblins;
	ASlime* Slimes;
};

