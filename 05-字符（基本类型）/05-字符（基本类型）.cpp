// 05-字符（基本类型）.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	char c = 'a';
	char c2 = ' ';
	char c3 = '2'; //'2'  2
	char c4 = '\n';

	cout << c << c2 << endl;

	int a = 'a';// a - z 97 98 99  
	cout << a << endl;
	int b = '2';
	cout << b << endl;

	cout.put('a');

	char d = 97;
	cout << d << endl;
	int t;
	cin >> t;
    return 0;
}

