// 31-break和continue语句.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{

	for (int i = 1; i < 10; i++) {
		if (i % 3 == 0) {
			continue;
		}
		cout << i << endl;
	}


    return 0;
}

