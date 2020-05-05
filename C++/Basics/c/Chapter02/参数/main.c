#include <stdio.h>
int Add(int x,int y)
{
	int z = x + y;
	return z;
}

int main()
{
	int c ;
	c = Add(1,2);
	printf("%d\r\n",c);
	return 0;
}