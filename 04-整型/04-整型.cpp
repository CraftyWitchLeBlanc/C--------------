// 04-整型.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <climits>
using namespace std;

int main()
{
	short a = 3;
	int b = 4000000000;
	long c = 900;
	long long d = 100;
	
	unsigned short e = -3;
	unsigned int f = 4000000000;

	cout << INT_MAX << endl;
	cout << INT_MIN << endl;

	cout << SHRT_MAX << endl;
	cout << SHRT_MIN << endl;

	cout << e << endl;
	cout << b << endl;
	cout << f << endl;

	short level = 8;

	int t;
	cin >> t;
    return 0;
}

