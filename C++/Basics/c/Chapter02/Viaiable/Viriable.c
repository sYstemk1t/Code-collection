#include <stdio.h>
#include <Windows.h>
int i;
int main()
{
	i = 1234567;
	while(1)
	{
		Sleep(3000);
		printf("%d\r\n",i);
	}
	return 0;
}