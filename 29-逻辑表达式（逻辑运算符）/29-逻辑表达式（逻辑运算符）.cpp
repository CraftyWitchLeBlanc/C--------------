// 29-逻辑表达式（逻辑运算符）.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	// ||  或

	/*int vip = 1;
	if (vip == 1 || vip == 2) {
		cout << "获得优惠";
	}*/

	//bool res1 = true || false;
	//bool res2 = false || true;
	//bool res3 = false || false;
	//bool res4 = true || true;
	//cout << res1 << " " << res2 << " " << res3 << " " << res4 << endl;

	//bool res1 = 4 == 4 || 4 == 9;
	//bool res2 = 9 > 0 || 3 > 4;
	//bool res3 = 2 < 8 || 3 < 9;
	//bool res4 = 5 < 3 || 9 < 7;
	//cout << res1 << " " << res2 << " " << res3 << " " << res4 << endl;

	// && 与
	//int age = 20;
	//if (age >= 18 && age <= 30) {
	//	cout << "你是青年" << endl;
	//}

	//bool res1 = 4 == 4 && 3 == 3;
	//bool res2 = 8 == 8 && 6 == 4;
	//bool res3 = 5 > 4 && 3 > 9;
	//bool res4 = 4 > 8 && 5 < 10;
	//bool res5 = 3 < 9 && 2 > 9;
	//cout << res1 << " " << res2 << " " << res3 << " " << res4<<" "<<res5 << endl;

	// !
	/*cout << !true << endl;
	cout << !(10 > 9) << endl;*/
	// && and || or ! not
	
	
	//?:
	//表达式1？表达式2：表达式3;
	//if (表达式1) {
	//	//表达式2
	//}
	//else {
	//	//表达式3
	//}
	
	//int i = true ? 100 : 90;
	//cout << i << endl;
	/*int vip = 1;
	string res = vip == 1 ? "有优惠" : "正常价格";
	cout << res << endl;*/
	
	int vip = 1;
	vip == 1 ? cout << "有优惠" : cout << "正常价格";

    return 0;
}

