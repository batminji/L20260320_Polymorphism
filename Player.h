#pragma once
#include "Actor.h"
class APlayer : public AActor
{
public:
	APlayer();
	virtual void AddActorLocalOffset();
	void Attack();
	void Damaged();
	void GetGold();
	~APlayer();

	int Gold;
};

