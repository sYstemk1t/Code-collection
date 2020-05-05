#include <stdio.h>
int main()
{
	char* a;
	short* b;
	int* c;

	a = (char*)100;
	b = (short*)100;
	c = (int*)100;

	a = a+5;
	b = b+5;
	c = c+5;
	printf("%d\r\n",a);
	printf("%d\r\n",b);
	printf("%d\r\n",c);
	return 0;
}