#pragma once

struct FVector2D
{
	int X;
	int Y;
};

struct FTransform
{
	FVector2D Location;
	FVector2D Scale;
};

class AActor
{
public:
	AActor();
	void AddActorLocalOffset();
	void Render();
	~AActor();

	FTransform Transform;
	int Mesh;
};

