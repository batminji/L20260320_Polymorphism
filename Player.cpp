#include "stdafx.h"

#include "Player.h"

APlayer::APlayer()
{
	Transform.Location.X = 0;
	Transform.Location.Y = 0;

	Transform.Scale.X = 0;
	Transform.Scale.Y = 0;

	Gold = 10;

	Mesh = 0;
}

void APlayer::Tick()
{
	std::cout << "APlayer::Tick" << std::endl;
}

void APlayer::Attack()
{
}

void APlayer::Damaged()
{
}

void APlayer::CollectGold(int Gold)
{
}

int APlayer::GetGold() const 
{
	return Gold;
}

void APlayer::SetGold(const int Gold)
{
	this->Gold = Gold;
}

APlayer::~APlayer()
{
}
