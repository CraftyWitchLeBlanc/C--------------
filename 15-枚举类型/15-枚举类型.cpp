// 15-枚举类型.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

//枚举
enum HeroType {
	Tank =1,
	Magic =4,
	ADC =7,
	Assist
};

int main()
{
	//int heroType = 1;
	HeroType heroType = Tank;
	heroType = ADC;
	cout << heroType << endl;
	int i = ADC + 2;
	cout << i << endl;
	heroType = HeroType(3);
	cout << heroType << endl;
	cout << Assist << endl;

    return 0;
}

