// 27-编程练习.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	/*for (int i = 0; i<5; i++)		cout << i;		cout << endl;*/
		//int j;		//for (j = 0; j<11; j += 3)		//	cout << j;		//cout << endl << j << endl;  
	
	//int i = 9;
	////++i;
	////--i;
	////cout << i << endl;
	////int result = i++ + 1;
	////int result = ++i + 1;
	////cout << result <<" "<<i<< endl;
	//cout << --i << endl;// 8
	//cout << i << endl;//8


	//int j = 5;	//while (++j<9)  // j = j+1   ;  j<9	//	cout << j++ << endl; //cout<<j<<endl;j=j+1	////6
	////8
	/*int j = 5;
	while (++j < 9)
		cout << j++ << endl;*/

	//int k = 8;	//do	//	cout << " k = " << k << endl; // k = 8	//while (k++<5); // k<5  ;k++	//

	//int k = 8;
	//do
	//	cout << "k = " << k << endl;
	//while (k++ < 5);
	//cout << k << endl;

	
	//for (int i = 1;i<=64;i*=2) {
	//	cout << i << endl;
	//}

	//cout << "请输入第一个数字:";
	//int num1;
	//cin >> num1;
	//cout << "请输入第二个数字:";
	//int num2;
	//cin >> num2;

	//int total = 0;

	//for (int i = num1; i <= num2; i++) {
	//	//  2 3 4 5 6 7 8 9 
	//	total += i;
	//}
	//cout << total << endl;
	// 2 - 5    2 3 4 5 


	float total = 0;
	while (true) {
		cout << "请输入一个数字：";
		float number;
		cin >> number;

		if (number==0) {
			break;
		}

		total += number;
		cout << "当前所有输入的和为：" << total << endl;
	}

	return 0;
}

