// 30-switch语句.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

enum HeroType {
	Tank = 1,
	Magic = 4,
	ADC = 7,
	Assist
};
int main()
{
	//switch (integer-expression) {
	//case label1:
	//	statement1;
	//	break;
	//case label2:
	//	statement2;
	//	break;
	//default:
	//	//code
	//	break;
	//}
	/*HeroType type = Tank;

	switch (type) {
	case Magic:
		cout << "使用魔法师技能" << endl;
		cout << "创建魔法师模型" << endl;
		break;
	case Tank:
		cout << "使用坦克技能" << endl;
		cout << "创建坦克模型" << endl;
		break;
	case ADC:
		cout << "使用射手技能" << endl;
		cout << "创建射手模型" << endl;
		break;
	case Assist:
		cout << "使用辅助技能" << endl;
		cout << "创建辅助模型" << endl;
		break;
	default:
		cout << "没有找到对应的英雄类型" << endl;
		break;
	}*/

	int vip = 2;
	switch (vip)
	{
	case 0:
		cout << "没有礼物" << endl;
		break;
	case 1:
		cout << "赠送10个钻石" << endl;
		break;
	case 2:
		cout << "赠送30个钻石" << endl;
		break;
	case 3:
		cout << "赠送50个钻石" << endl;
		break;
	case 4:
		cout << "赠送100个钻石" << endl;
		break;
	default:
		break;
	}



    return 0;
}

