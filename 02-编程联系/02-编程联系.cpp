// 02-编程联系.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{

	int age;

	cin >> age;

	int months = age * 12;

	cout << "你在地球上存在了" << months << "个月" << endl;


	cin >> age;
    return 0;
}

