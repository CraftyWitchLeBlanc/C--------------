// 24-类型别名.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

//宏
#define END return 0;
#define START int main()
#define FString string
#define R return

typedef string UString;
typedef int FInt;

START
{
	FString name = "siki";
	cout << name<<endl;

	UString nickName = "sikiedu";
	cout << nickName << endl;
	R 0;
}

