// 17-指针和数组.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	//int a[]{ 3,12,312,31,2312,3,12 ,3,8,65};

	//cout << a << endl;
	//cout << *a << endl;
	//cout << *(a + 4) << endl;

	//*(a + 1) = 1000;
	//cout << a[1] << endl;

	int * p = new int[20];
	p[0] = 90;
	cout << p[0] << endl;
	*(p + 2) = 80;
	cout << *(p + 2) << endl;

	delete[] p;

    return 0;
}

