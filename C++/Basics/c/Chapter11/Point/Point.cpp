#include <stdio.h>


int main()
{
	int** p = (int**)1;
	//int x = *p;
	printf("%d %d\r\n",p[1][2],*(*(p+1)+2));
	return 0;
}

int main1()
{
	int* p = (int*)1;
	printf("%d %d\r\n",p[1],*(p+1));
	return 0;
}