#include "Player.h"
Player::Player()
{
	name = new char[7];
	strcpy_s(name, 7, "NoName");
}

void Player::SetName(const char* nickname)
{
	if (name != 0)
	{
		delete name;
	}
	name = new char[sizeof(nickname)];
	strcpy_s(name, sizeof(name), nickname);
}

char* Player::GetName()
{
	return name;
}

void Player::Generate()
{

}