// 11-数组.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	//int score = 100;
	//char cArray[10];
	//bool bArray[90];
	//float fArray[34];
	//double dArray[90];
	int scoreArray1[4] = { 34,3,234,45 };
	int scoreArray2[4] = { 34,3 };//0 
	int scoreArray3[] = { 34,3,123,45,4,23 };
	/*int scoreArray4[4];
	scoreArray4[4] = { 34,3,3,32 };*/ //error
	//scoreArray2 = scoreArray1;

	int scoreArray4[]{23,2,3}; //索引 下标

	cout << scoreArray1[0] << endl;
	cout << scoreArray1[-1] << endl;//
	cout << scoreArray1[8] << endl;//
	cout << scoreArray2[3] << endl;//
	cout << scoreArray4[0] << endl;//
	scoreArray4[1] = 100;
	cout << scoreArray4[1] << endl;//

    return 0;
}

