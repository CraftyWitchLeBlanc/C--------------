// 14-结构体.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

struct Position {
	float x;
	float y;
	float z;
};

struct Hero {
	string name;
	int hp;
	int attack;
	Position pos;
};

int main()
{
	//float playerPositionX;
	//float playerPositionY;
	//float playerPositionZ;
	//Position playerPos = { 3,4,6.7 };
	Position playerPos{ 3,4,6.7 };
	//Position playerPos{ };
	cout << playerPos.x << playerPos.y << playerPos.z << endl;
	playerPos.y = 100;
	cout << playerPos.y << endl;


	Position enemyPos;

	Position enemysPos[]{ {1,1,1},{2,4,7},{},{6,4,5},{123,2,2} };
	cout << enemysPos[1].x << enemysPos[1].y << enemysPos[1].z << endl;

    return 0;
}

