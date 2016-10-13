#pragma once
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
class Application
{
public:
	virtual void Start() = 0;
	void Run();
	virtual void Shutdown() = 0;
	virtual void Update() = 0;
	Application() {};
	~Application() {};
protected:
	bool gameover = false;
};


class RockPaperScissors : public Application
{
public:

	void Application();
	void Start();
	void Shutdown();
	void Update();

};