#include <stdio.h>
int Add(int x,int y)
{
	return x + y;
}

int Add1(int x,int y,int z)
{
	int m = Add(x,y);
	return m + z;
}

int main()
{
	int r;
	r = Add1(1,2,3);
	
	return 0;
}