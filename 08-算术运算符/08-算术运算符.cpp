// 08-算术运算符.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	// + - * / %
	//float a;
	//cout << "请输入第一个数字：";
	//cin >> a;
	//float b;
	//cout << "请输入第二个数字：";
	//cin >> b;

	//int res1 = a + b;
	//int res2 = a - b;
	//int res3 = a * b;
	//int res4 = a / b;

	//cout << res1 << "  " << res2 << "  " << res3 << "   " << res4 << endl;

	//int a = 7;
	//int b = 2;
	//float res1 = a / b;
	//cout << res1 << endl;

	//int res1 = 13 % 5;
	//int res2 = 13 % 5.1;
	//cout << res1 << endl;

	int res0 = 3 + 3;
	int res1 = 3 + 7 * 3;
	int res2 = (3 + 7) * 3;
	int res3 = (42 / 7) * 3;
	cout << res1 << "  " << res2 << "  " << res3 << "   " << res0 << endl;

	int t;
	cin >> t;
    return 0;
}

