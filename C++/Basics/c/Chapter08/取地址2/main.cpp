#include <stdio.h>
char a;
short *b;
int **c;

int main()
{

	char* x;
	char** p1;
	char*** p2;
	char**** p3;
	char***** p4;

	p1 = &x;
	p2 = &p1;
	p3 = &p2;
	p4 = &p3;

	printf("%d\r\n",p1);
	printf("%d\r\n",p2);
	printf("%d\r\n",p3);
	printf("%d\r\n",p4);

	return 0;

}