// 20-编程练习2.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <array>
using namespace std;

int main()
{	//struct CandyBar {	//	string brand;	//	float weight;	//	int cal;	//};	//CandyBar snack = { "Mocha Munch",2.3,500 };	//cout << "Snack:" << endl;	//cout << snack.brand << " " << snack.weight << " " << snack.cal << endl;	
	array<float, 3> a;
	cout << "请输入第一次的成绩：";
	cin >> a[0];
	cout << "请输入第2次的成绩：";
	cin >> a[1];
	cout << "请输入第3次的成绩：";
	cin >> a[2];
	float total = a[0] + a[1] + a[2];

	cout << total / 3 << endl;

	return 0;
}

