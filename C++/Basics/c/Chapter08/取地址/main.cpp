#include <stdio.h>

struct Point
{
	int x;
	int y;
};
char a;
short b;
int c;
Point p;

int main()
{
	printf("%x %x %x %x \r\n",&a,&b,&c,&p);
	
	return 0;
}