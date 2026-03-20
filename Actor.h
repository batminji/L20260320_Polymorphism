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

	virtual void Begin();
	virtual void Tick();
	virtual void Render();

	FTransform GetTransform() const;
	void SetTransform(const FTransform Transform);

	FVector2D GetLocation() const;
	void SetLocation(const FVector2D Location);

	FVector2D GetScale() const;
	void SetScale(const FVector2D Scale);

	~AActor();

protected:
	FTransform Transform;
	int Mesh;
};

