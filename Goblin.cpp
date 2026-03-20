#include "Goblin.h"
#include <iostream>

AGoblin::AGoblin()
{
	Transform.Location.X = 0;
	Transform.Location.Y = 0;

	Transform.Scale.X = 0;
	Transform.Scale.Y = 0;

	Gold = 10;

	Mesh = 0;
}

void AGoblin::AddActorLocalOffset()
{
	std::cout << "Goblin Move" << std::endl;
}

AGoblin::~AGoblin()
{
}
