// 16-指针.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	//int a = 10;
	//float b = 9.7f;
	//int c = 20;

	// &取得一个变量的内存地址
	//cout << &a << endl;
	//cout << &b << endl;
	//// *从内存地址所对应的内存处取得数据
	//cout << *(&a) << endl;
	//cout << a << endl;
	// error:cout << *a << endl;

	//int* pa = &a;
	//float* pb = &b;

	//cout << pa << endl;
	//cout << pb << endl;

	//cout << *pa << endl;
	//cout << *pb << endl;
	//int* p;
	//p = pa;
	//cout << *p << endl;
	//cout << *pa << endl;
	//*pa = 100;
	//cout << a << " " << *pa << endl;
	//*p = 300;
	//cout << a << " " << *pa << " " << *pa << endl;


	//int * p1 = 0;
	//int * p1 = NULL;
	//int * p2=0;
	//int * p3 = nullptr;//c++
	//cout << p1 << " " << p2 << " "<<p3<<endl;

	//void * p;// p可以接收任意类型的对值
	//p = &a;
	////p = &b;
	//cout << *((int*)p) << endl;

	int * p = new int;
	*p = 100;
	cout << *p << endl;
	delete p;

    return 0;
}

