#include <stdio.h>
int main()
{
	int* x;
	int* y;

	x = (int*)100;
	y = (int*)200;
	if(y>x)
	{
		printf("GOOD\r\n");
	}
	else
	{
		printf("NO\r\n");
	}
	return 0;
}