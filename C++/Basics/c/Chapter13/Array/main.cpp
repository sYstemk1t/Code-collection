#include <stdio.h>

int main()
{
	int Array[]= {1,2,3,4,5,6,7,8,9,10};
	int (*px)[10] = &Array;
	for(int i = 0;i<10;i++)
	{
		printf("%d\r\n",(*px)[i]);
		printf("%d\r\n",px[0][i]);
		px++;
	}
	return 0;
}