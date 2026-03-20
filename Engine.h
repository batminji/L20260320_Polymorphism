#pragma once

class UWorld;

class UEngine
{
public:
	UEngine();
	void Initialize();
	void Run();
	void Terminate();

	void Input();
	void Tick();
	void Render();

	~UEngine();

	UWorld* World;
};

