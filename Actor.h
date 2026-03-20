#pragma once

struct Vector2D
{
	int X;
	int Y;
};

struct FTransform
{
	Vector2D Location;
	Vector2D Scale;
};

class AActor
{
public:
	AActor();
	virtual void AddActorLocalOffset();
	void Render();
	~AActor();

	FTransform Transform;
	int Mesh;
};

