// 07-浮点类型（基本类型）.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <climits>
using namespace std;

int main()
{
	//12.34  82394.34  9.0  0.00034
	//E表示法
	//-3.4e-9   // 3.4E9   3.4/1000000000

	float a = 12.2;
	double b = 24.3;
	long double c = 21321.2;

	cout << FLT_MAX << endl;
	cout << FLT_MIN << endl;

	int t;
	cin >> t;
    return 0;
}

