#include <stdio.h>
#include <Windows.h>

void fun()
{
	while (1)
	{
		printf("IL");
		printf("\r\n");
	}
}


int Check()
{
	int Array[8];
	Array[9] = (int)&fun;
	return 0;
}


int main()
{
	__asm
	{
		mov eax,eax
	}
	Check();
	system("pause");
	return 0;
}