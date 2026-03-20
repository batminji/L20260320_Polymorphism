#include "Slime.h"
#include <iostream>

ASlime::ASlime()
{
	Transform.Location.X = 0;
	Transform.Location.Y = 0;

	Transform.Scale.X = 0;
	Transform.Scale.Y = 0;

	Gold = 10;

	Mesh = 0;
}

void ASlime::AddActorLocalOffset()
{
	std::cout << "Slime Move" << std::endl;
}

ASlime::~ASlime()
{
}
