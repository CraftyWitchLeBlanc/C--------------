// 13-字符串基于string.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1;
	string str2 = "www.sikiedu.com";
	cout << str1 << endl;
	cout << str2 << endl;
	str1 = str2;
	cout << str1 << endl;
	//cin >> str1;
	//cout << str1 << endl;
	//getline(cin, str1);
	//cout << str1 << endl;

	cout << str2[5] << endl;
	str1 = "sikiedu";
	str2 = ".com";
	string s = str1+str2;
	s += str1;// s = s + str1;  sikiedu.com + sikiedu   sikiedu.comsikiedu
	cout << s << endl;

	cout << s.size() << endl;
	


    return 0;
}

