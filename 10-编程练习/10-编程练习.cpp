// 10-编程练习.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	//cout << "请输入你的身高（米）：";
	//float height;
	//cin >> height;
	//int heightCM = height * 100;

	//cout << "你的身高是" << heightCM << "厘米" << endl;

	// 输入一个四位数  个位 十分位 百分位 千分位
	//int num;
	//cout << "请输入一个数字(四位数)：";
	//cin >> num;
	//// 8739
	//int ge = num % 10;
	//int shi =(num % 100) / 10;
	//int bai = (num % 1000) / 100;
	//int qian = num / 1000;
	//cout << ge << " " << shi << " " << bai << " " << qian << endl;

	//int seconds;
	//cout << "请输入秒数：";
	//cin >> seconds;

	//int days = seconds / (24 * 60 * 60);
	//int hours = (seconds - days * (24 * 60 * 60)) / (60 * 60);
	//int minutes = (seconds % (60 * 60)) / 60;
	//int secondsLeft = seconds % 60;

	//cout << days << "天 " << hours << "小时 " << minutes << "分钟 " << secondsLeft << "秒 " << endl;


	int girlsNumber; int boysNumber;
	int total;
	cout << "请输入女生数量：";
	cin >> girlsNumber;
	cout << "请输入男生数量：";
	cin >> boysNumber;
	total = girlsNumber + boysNumber;
	int percent = (girlsNumber / float(total)) * 100;
	cout << percent  <<"%"<< endl;

    return 0;
}

