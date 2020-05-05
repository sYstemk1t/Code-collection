#include <stdio.h>
int main()
{
	char* c;
	int* i;
	short* s;

	c = 100;
	i = 100;
	s = 100;

	c++;
	i++;
	s++;
	printf("%p\r\n",&c);
	printf("%p\r\n",&i);
	printf("%p\r\n",&s);

	printf("%d\r\n",c);
	printf("%d\r\n",i);
	printf("%d\r\n",s);
	return 0;
}