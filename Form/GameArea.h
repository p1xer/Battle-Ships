#pragma once
#include "array"
enum State
{
	mine_a = -2,
	mine_d = -1,
	empty = 0,
	ship_a = 1,
	ship_d = 2,
	shoot = 3
};

public value struct Coords
{
	int x, y;
};

ref class GameArea
{
private:
	int areasize;
	int ship1 = 4, ship2 = 3, ship3 = 2, ship4 = 1, mine = 1;
public:
	array<array<int>^>^ area;
	GameArea();
	GameArea(int size);
	~GameArea();

	void Settings();
	void ManageArea();
	void AutoGen();
	bool AroundCheck(int x, int y);
	void PlaceShip(int shiptype, int shipammount, int obj_type);
	void ClearArea();
	//int GetShip1();
	void SetShip1(int ship1);
	//int GetShip2();
	void SetShip2(int ship2);
	//int GetShip3();
	void SetShip3(int ship3);
	//int GetShip4();
	void SetShip4(int ship4);

	//int GetMines();
	void SetMines(int ship4);
	Coords RandomShoot();
	void Shoot(int x, int y);
	//void SendToGrid();
	bool PlacementCheck();
	bool ShootCheck(int x, int y);
	bool LoseCheck();
	void MineShot();
};