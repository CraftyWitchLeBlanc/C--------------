// 12-字符串.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	//char website[] = { 's','i','k','i','\0','d','u' };
	//char website2[]= { 's','i','k','i','e','d','u','\0' };// 空字符 空格字符
	//cout << website2 << endl;
	//cout << website << endl;

	//char website[] = "sikiedu";
	//cout << website[7] << endl;

	//cout << strlen(website) << endl;
	//cout << website[3] << endl;

	//char website[20];
	//cin >> website;// sikiedu.com  sikiedu.com\0
	//cout << website << endl;

	//char str[] = "My name is Micheal. I come from china."
	//			"I like food! I like tralving!";

	char name[30];
	char food[40];

	cout << "你的名字是：";
	//cin >> name;
	cin.getline(name, 30);

	cout << "你喜欢的食物是：";
	//cin >> food;
	cin.getline(food, 40);

	cout << name << "喜欢吃" << food;
    return 0;
}

