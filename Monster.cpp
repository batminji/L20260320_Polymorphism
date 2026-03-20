#include "Monster.h"

AMonster::AMonster()
{
	Transform.Location.X = 0;
	Transform.Location.Y = 0;

	Transform.Scale.X = 0;
	Transform.Scale.Y = 0;

	Gold = 0;

	Mesh = 0;
}

void AMonster::Move()
{
}

void AMonster::Attack()
{
}

void AMonster::Damaged()
{
}

void AMonster::DropGold()
{
}

AMonster::~AMonster()
{
}
