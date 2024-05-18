#pragma once
#include "GameArea.h"

class Player
{
private:
GameArea PlayerArea();
char* name;
public:
	Player();
	~Player();

	void Generate();

	void SetName(const char*);
	char* GetName();
};