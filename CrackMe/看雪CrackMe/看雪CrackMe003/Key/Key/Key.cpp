// Key.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <windows.h>
void Keygen(const char* user, char* code)
{
	//求序列号用的密匙
	const char szBuffer[] = { "ZWATRQLCGHPSXYENVBJDFKMU" };

	unsigned char a = 0;
	for (int i = 0; i<strlen(user); ++i) a += user[i];
	a %= 0x18;
	//序列号第2位必为E
	code[1] = 'E';
	//序列号第1位
	code[0] = szBuffer[a];
	int b = a;
	if (b > 0x18) b -= 0x18;
	b += a;
	if (b > 0x18) b -= 0x18;
	//序列号第3位
	code[2] = szBuffer[b];
	//序列号第4-9位
	for (int i = 3; i<9; ++i)
	{
		b = b + code[i - 1] - 'A';
		if (b > 0x18) b -= 0x18;
		code[i] = szBuffer[b];
	}
	//序列号第10位
	int c = 0;
	for (int i = 0; i<9; ++i) c += code[i];
	c /= 9;
	code[9] = c;
	code[10] = '\0';
}
int _tmain(int argc, _TCHAR* argv[])
{
	char szUser[50];
	char szCode[50];
	printf("请输入用户名：");
	scanf("%s", szUser);

	Keygen(szUser, szCode);
	printf("序列号是： %s\n", szCode);
	system("pause");
	GlobalMemoryStatus
	return 0;
}

