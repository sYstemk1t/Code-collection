// CrackMe.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <iostream>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	
	char buff[64] = { "systemk1t" };
	int len = strlen(buff);
	if (len > 0)
	{
		int nRet = len * 0x17CFB;
		nRet += buff[0];
		printf("AKA-%d", nRet);
	}
	else
	{
		;
	}
	system("pause");
	return 0;
}

