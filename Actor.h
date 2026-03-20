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
	virtual void Move();
	void Render();

	const FTransform GetTransform();
	void SetTransform(FTransform Transform);

	const FVector2D GetLocation();
	void SetLocation(FVector2D Location);

	const FVector2D GetScale();
	void SetScale(FVector2D Scale);

	~AActor();

protected:
	FTransform Transform;
	int Mesh;
};

