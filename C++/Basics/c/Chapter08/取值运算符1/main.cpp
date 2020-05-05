#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
int main()
{
	char* p = "c";
	//printf("%c\r\n",p);
	printf("%c\r\n",*(p+1));
	system("pause");
	return 0;
}