// 26-do while循环.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{

	//do {
	//	//循环体
	//} while (判断);

	//int i = 100;
	//do {
	//	cout << "创建敌人" << endl;
	//} while (i > 100);

	//while (i > 100) {
	//	cout << "创建敌人" << endl;
	//}

	int scores[] = { 234,2,42,3,2,42,42,32 };
	//for (int i = 0; i < 8; i++) {
	//	cout << scores[i] << endl;
	//}

	for (int& temp : scores) {
		//cout << temp << endl;
		temp = temp * 2;
	}
	for (int temp : scores) {
		cout << temp << endl;
	}

    return 0;
}

