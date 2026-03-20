#pragma once
#include "Actor.h"
class APlayer : public AActor
{
public:
	APlayer();
	virtual void Move();
	void Attack();
	void Damaged();
	void CollectGold(int Gold);
	int GetGold();
	void SetGold(int Gold);
	~APlayer();

protected:
	int Gold;
};

