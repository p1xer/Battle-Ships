#include "GameArea.h"
#include <iostream>
#include <random>
#include <list>
#include <tuple>
GameArea::GameArea()
{
	areasize = 10;
	area = gcnew array<array<int>^>(areasize);
	for (int i = 0; i < areasize; i++)
	{
		area[i] = gcnew array<int>(areasize);
		for (int j = 0; j < areasize; j++)
		{
			area[i][j] = 0;
		}
	}
}

GameArea::GameArea(int size)
{

	areasize = size;
	area = gcnew array<array<int>^>(areasize);
	for (int i = 0; i < areasize; i++)
	{
		area[i] = gcnew array<int>(areasize);
	}

	for (int i = 0; i < areasize; i++)
	{
		for (int j = 0; j < areasize; j++)
		{
			area[i][j] = 0;
		}
	}
}

GameArea::~GameArea()
{
	//for (int i = 0; i < areasize; i++)
	//{
	//	if (area[i]) delete[] area[i];
	//}
	//delete[]area;


}

void GameArea::SetShip1(int _ship1)
{
	if (_ship1 >= 0)
	{
		ship1 = _ship1;
	}
}

void GameArea::SetShip2(int _ship2)
{
	if (_ship2 >= 0)
	{
		ship2 = _ship2;
	}
}

void GameArea::SetShip3(int _ship3)
{
	if (_ship3 >= 0)
	{
		ship3 = _ship3;
	}
}

void GameArea::SetShip4(int _ship4)
{
	if (_ship4 >= 0)
	{
		ship4 = _ship4;
	}
}

void GameArea::SetMines(int _mine)
{
	if (_mine >= 0)
	{
		ship4 = _mine;
	}
}
void GameArea::Settings()
{
	//
}
void GameArea::ManageArea()
{
	for (int i = 0; i < ship1; i++)
	{
		//Enter position one size ship
		//area[x][y] =
	}
}
bool GameArea::AroundCheck(int x, int y)
{

	if (x >= 0 && x < areasize && y >= 0 && y < areasize)
	{
		for (int i = -1; i <= 1; i++)
		{
			for (int j = -1; j <= 1; j++)
			{
				if ((x + i >= 0 && x + i < 10 && y + j < 10 && y + j >= 0) && area[x + i][y + j] != 0)
				{
					return false;
				}
			}
		}
		return true;
	}
	else return false;
}

void GameArea::PlaceShip(int shiptype, int shipammount, int obj_type)
{
	int direct1, direct2;
	int x, y;
	bool empty = true;
	for (int i = 0; i < shipammount; i++)
	{
		empty = true;
		x = rand() % 10;
		y = rand() % 10;
		if (AroundCheck(x, y))
		{
			//if (shiptype > 1)
			//{
				direct1 = rand() % 2;
				if (direct1 == 1)
				{
					do
					{
						direct1 = rand() % 3 - 1;
					} while (direct1 == 0);
					direct2 = 0;
				}
				else
				{
					do
					{
						direct2 = rand() % 3 - 1;
					} while (direct2 == 0);
					direct1 = 0;
				}
				for (int j = 1; j < shiptype; j++)
				{
					if (!AroundCheck(x + direct1 * j, y + direct2 * j))
					{
						empty = false;
						break;
					}
				}
				if (empty)
				{
					for (int i = 0; i < shiptype; i++)
					{
						area[x + direct1 * i][y + direct2 * i] = obj_type;
					}
				}
				else i--;
			//}
			//else
			//{
			//	area[x*i][y * i] = obj_type;
			//}
		}
		else i--;
	}
}
void GameArea::AutoGen()
{
	srand(time(NULL));
	PlaceShip(4, ship4, 1);
	PlaceShip(3, ship3, 1);
	PlaceShip(2, ship2, 1);
	
	PlaceShip(1, ship1, 1);
	PlaceShip(1, mine, -2);
}

void GameArea::ClearArea()
{
	for (int i = 0; i < areasize; i++)
	{
		for (int j = 0; j < areasize; j++)
		{
			area[i][j] = 0;

		}
	}
}

bool GameArea::PlacementCheck()
{
	int totalcells = 0;
	int cellsinrow = 0;
	int shipcounter[5] = { 0,0,0,0,0 };
	bool MineFlag = false;

	std::list<std::list <std::tuple <int, int>>> shiplist;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (area[i][j] != 0)
			{
				if (j <= 8 && area[i + 1][j + 1] != 0)
				{
					return false;
				}
				else if (j >= 1 && area[i + 1][j - 1] != 0)
				{
					return false;
				}
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (area[i][j] == 1)
			{
				if (j >= 1 && area[i][j - 1] == 1)
				{
					std::tuple <int, int> t(i, j - 1);
					for (auto s = shiplist.begin(); s != shiplist.end(); s++)
					{
						for (auto ss = (*s).begin(); ss != (*s).end(); ss++)
						{
							if ((*ss) == t)
							{
								std::tuple <int, int> tt(i, j);
								(*s).push_back(tt);
								break;
							}
						}
					}
				}
				else if (i >= 1 && area[i - 1][j] == 1)
				{
					std::tuple <int, int> t(i - 1, j);
					for (auto s = shiplist.begin(); s != shiplist.end(); s++)
					{
						for (auto ss = (*s).begin(); ss != (*s).end(); ss++)
						{
							if ((*ss) == t)
							{
								std::tuple <int, int> tt(i, j);
								(*s).push_back(tt);
								break;
							}
						}
					}
				}
				else
				{
					std::list<std::tuple <int, int>> coords;
					std::tuple <int, int> t(i, j);
					coords.push_back(t);
					shiplist.push_back(coords);
				}
			}
			if (area[i][j] == -2)
			{
				if (!MineFlag)
				{
					if ((j >= 1 && area[i][j - 1] != 0) || (i >= 1 && area[i - 1][j] != 0))
					{
						return false;
					}
					MineFlag = true;
				}
				else
				{
					return false;
				}
			}
		}
	}
	if (shiplist.size() == 10)
	{
		for (auto i = shiplist.begin(); i != shiplist.end(); i++)
		{
			if ((*i).size() < 5)
			{
				shipcounter[(*i).size() - 1]++;
			}
		}
		for (int i = 0; i < 5; i++)
		{
			if (shipcounter[i] != 4 - i)
			{
				return false;
			}
		}
		return true;
	}
	return false;

}

bool GameArea::ShootCheck(int x, int y)
{
	switch (area[x][y])
	{
	case 1:
		area[x][y] = 2;
		return LoseCheck();
		break;
	case -2:
		area[x][y] = -1;
		return LoseCheck();
		break;
	case 0:
		area[x][y] = 3;
		break;
	default:
		return false;
		break;
	}
	return false;
}

bool GameArea::LoseCheck()
{
	for (int i = 0; i < areasize; i++)
	{
		for (int j = 0; j < areasize; j++)
		{
			if (area[i][j] == 1 || area[i][j] == -2)
			{
				return false;
			}
		}
	}
	return true;

}
//mine_a = -2,
//mine_d = -1,
//empty = 0,
//ship_a = 1,
//ship_d = 2,
//shoot = 3
void GameArea::Shoot(int x, int y) // Постріл за координатами
{
	switch (area[x][y])
	{
	case 1:
		area[x][y] = 2;
		break;
	case -2:
		area[x][y] = -1;
		break;
	case 0:
		area[x][y] = 3;
		break;
	default:
		break;
	}
}

void GameArea::MineShot()
{
	int x, y;
	do {
		x = rand() % 10;
		y = rand() % 10;
	} while (area[x][y] != 1);
	area[x][y] = 3;
}

Coords GameArea::RandomShoot() //Постріл у випадкову клітинку
{
	int x;
	int y;
	bool coordsOk;
	do
	{
		coordsOk = true;
		x = rand() % 10;
		y = rand() % 10;
		//	if(area[x][y] != 3)
		//	{
		//		int i = -1;
		//		while (i < 2 && coordsOk == true)
		//		{
		//			int j = -1;
		//			while (j < 2 && coordsOk == true)
		//			{
		//				if((x+i <= 9 && x+i >= 0) && (y+j <= 9 && y+j >= 0))
		//				{
		//					if (area[x + i][y + j] == 2 || area[x + i][y + j] == -1)
		//					{
		//						coordsOk = false;
		//					}
		//				}
		//				j++;
		//			}
		//			i++;
		//		}
		//	}
		//	else
		//	{
		//		coordsOk = false;
		//	}
		//} while (coordsOk == false);
	} while (area[x][y] != 1);
	
	Shoot(x, y);

	Coords RandomCoords;
	RandomCoords.x = x;
	RandomCoords.y = y;
	return RandomCoords;
 }

