#pragma once
#include "Monster.h"
class ASlime : public AMonster
{
public:
	ASlime();
	virtual void AddActorLocalOffset();
	~ASlime();
};

