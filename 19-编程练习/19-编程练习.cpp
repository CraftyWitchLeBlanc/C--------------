// 19-编程练习.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//1，创建数组actor，里面有30个char	//	创建数组chuck，里面有13个float	//char actor[30];	//float chuck[13];	//2，创建一个结构体糖块CandyBar，里面包含三个成员。	//	第一个成员存储了糖块的品牌，第二个成员存储糖块的重量（可以有小数），	//	第	三个成员存储了糖块的卡路里（整数）。编写一个程序，声明这个结构，	//	创建一个名为snack的CandyBar变量，初始话为 	Mocha Munch，2.3, 500.	//	初始化应该声明snack的时候进行。最后程序显示snack变量的内容。	struct CandyBar {		string brand;		float weight;		int cal;	};	CandyBar snack = { "Mocha Munch",2.3,500 };	cout << "Snack:" << endl;	cout << snack.brand << " " << snack.weight << " " << snack.cal << endl;	//3，编写一个程序，然给用户输入三次50米跑的成绩，显示次数和平均成绩。
	//	使用一个array对象来存储数据。

    return 0;
}

