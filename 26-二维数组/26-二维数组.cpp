// 26-二维数组.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int scores[5] = { 233,123,23,123,345 };

	int scores2[4][5] = {
		{123,12,321,2,2},
		{123,2,13,12,31},
		{123,12,3,343,4},
		{234,345,4,543,3} };
	//cout << scores2[1][1] << endl;

	//for (int i = 0; i < 5; i++) { // 5
	//	for (int j = 0; j < 6; j++) {// 5*6 30
	//		cout << "i:" << i << " j:" << j << endl;
	//	}
	//}
	/*for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			cout << scores2[i][j]<<" ";
		}
		cout << endl;
	}*/

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			cout << scores2[j][i] << " ";
		}
		cout << endl;
	}

    return 0;
}

