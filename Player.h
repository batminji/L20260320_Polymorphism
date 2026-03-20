#pragma once
#include "Actor.h"
class APlayer : public AActor
{
public:
	APlayer();

	virtual void Tick() override;

	void Attack();
	void Damaged();
	void CollectGold(int Gold);

	int GetGold() const;
	void SetGold(const int Gold);

	~APlayer();

protected:
	int Gold;
};

