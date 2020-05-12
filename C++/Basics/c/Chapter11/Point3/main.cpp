#include <stdio.h>
int main()
{
	char* x;
	short* y;
	int* z;
	float* f;
	double* b;

	x = (char*)"1";
	y = x;

	f = (double*)"20.34";
	b = f;
	printf("%c\r\n",*x);
	printf("%c\r\n",*y);
	return 0;
}