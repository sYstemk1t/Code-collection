// CrackMe.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <iostream>
int _tmain(int argc, _TCHAR* argv[])
{
	std::cout << "请输入用户名" << std::endl;
	int cName = getchar();
	if (cName > 0x21)
	{
		cName *= 0x29;
		cName *= 2;
		printf("Serial: CW-%4d-CRACKED\r\n", cName);
	}
	else
	{
		printf("Error");
	}
	system("pause");
	return 0;
}

