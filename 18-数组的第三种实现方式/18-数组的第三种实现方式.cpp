// 18-数组的第三种实现方式.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <array>
using namespace std;

int main()
{

	array<int, 9> a1 = { 2,12,31,23,123,12 };
	array<int, 9> a2;
	a2 = a1;
	cout << a1[4] <<" "<<a2[4]<< endl;
	cout << a1[8] << " " << a2[8] << endl;



    return 0;
}

