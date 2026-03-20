#include "Player.h"
#include <iostream>

APlayer::APlayer()
{
	Transform.Location.X = 0;
	Transform.Location.Y = 0;

	Transform.Scale.X = 0;
	Transform.Scale.Y = 0;

	Gold = 0;

	Mesh = 0;
}

void APlayer::Move()
{
	std::cout << "Player Move" << std::endl;
	AddActorLocalOffset();
}

void APlayer::Attack()
{
}

void APlayer::Damaged()
{
}

void APlayer::GetGold()
{
}

APlayer::~APlayer()
{
}
