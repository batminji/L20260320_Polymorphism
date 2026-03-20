#include "WildBoar.h"
#include <iostream>

AWildBoar::AWildBoar()
{
	Transform.Location.X = 0;
	Transform.Location.Y = 0;

	Transform.Scale.X = 0;
	Transform.Scale.Y = 0;

	Gold = 10;

	Mesh = 0;
}

void AWildBoar::AddActorLocalOffset()
{
	std::cout << "WildBoar Move" << std::endl;
}

AWildBoar::~AWildBoar()
{
}
