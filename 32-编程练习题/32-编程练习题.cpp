// 32-编程练习题.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	/*char ch;
	cin >> ch;
	int a_grade=0, b_grade = 0, c_grade = 0, d_grade = 0,f_grade=0;
	switch (ch)
	{
	case 'A':
		a_grade++;
		break;
	case 'B':
		b_grade++;
		break;
	case 'C':
		c_grade++;
		break;
	case 'D':
		d_grade++;
		break;
	default:
		f_grade++;
		break;
	}
	cout << a_grade << b_grade << c_grade << d_grade << f_grade << endl;*/
	
	// 阶乘
	// 4! = 1*2*3*4
	//long long result = 1;
	//for (int i = 1; i <= 5; i++) {
	//	result = result * i;
	//}
	//cout << result << endl;

	//long long result = 0;
	//for (int i = 1; i <= 5; i++) {
	//	// i!
	//	long long resultTemp = 1;
	//	for (int j = 1; j <= i; j++) {
	//		resultTemp = resultTemp * j;
	//	}
	//	result += resultTemp;
	//}
	//cout << result;

	//  werdsdfw
	//  wfdsdrew
/*
	string str;
	cin >> str;*/

	// 10
	// 0 - 9 // 0-4 5-9 
	// 11 0-10 0-4
	//
	//bool isHui = true;
	//for (int i = 0; i < str.size() / 2; i++) {
	//	// i  str.size()-1-i
	//	if (str[i] != str[str.size() - 1 - i]) {
	//		isHui = false;
	//	}
	//}

	//if (isHui) {
	//	cout << "是回文" << endl;
	//}
	//else {
	//	cout << "不是回文" << endl;
	//}

	int a, b,c;
	cout << "请输入第一个值:";
	cin >> a;
	cout << "请输入第二个值:";
	cin >> b;
	cout << "请输入第三个值:";
	cin >> c;
	if (a > b) {
		int temp = a;
		a = b;
		b = temp;//
	}
	if (b > c) {
		int temp = b;
		b = c;
		c = temp;
	}
	if (a > b) {
		int temp = a;
		a = b;
		b = temp;//
	}
	cout << a << " " << b <<" "<<c<< endl;

    return 0;
}

