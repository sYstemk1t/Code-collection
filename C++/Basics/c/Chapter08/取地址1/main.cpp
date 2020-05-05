#include <stdio.h>

struct Point
{
	int x;
	int y;
};


int main()
{
	char a;
	short b;
	int c;
	Point p;
	printf("%p %p %p %p \r\n",&a,&b,&c,&p);
	
	return 0;
}