// 28-if.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int hp = 0;

	//if (hp<=0) {
	//	//cout << "true" << endl;
	//	cout << "游戏结束" << endl;
	//}
	//if (hp <= 0)
	//	cout << "游戏结束" << endl;

	//if (hp <= 0) {
	//	cout << "游戏结束" << endl;
	//}
	//else {
	//	cout << "游戏继续" << endl;
	//}

	int age = 10;
	//if (age < 18) {
	//	cout << "你可以玩3个小时" << endl;
	//}
	//else {
	//	//cout << "你可以玩10个小时" << endl;
	//	if (age < 50) {
	//		cout << "你可以玩10个小时" << endl;
	//	}
	//	else {
	//		cout << "你可以玩2个小时" << endl;
	//	}
	//}

	if (age < 18) {
		cout << "你可以玩3个小时" << endl;
	}
	else if (age<50 ) {
		cout << "你可以玩10个小时" << endl;
	}
	else if(age<80) {
		cout << "你可以玩2个小时" << endl;
	}
	else {
		cout << "你不能玩这个游戏" << endl;
	}


    return 0;
}

