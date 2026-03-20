#include "Engine.h"
#include <iostream>

int main()
{
	srand((unsigned int)time(nullptr));

	UEngine* Engine = new UEngine();

	Engine->Initialize();
	Engine->Run();
	Engine->Terminate();

	delete Engine;
	Engine = nullptr;

	return 0;
}