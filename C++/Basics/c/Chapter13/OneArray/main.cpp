#include <stdio.h>

int main()
{
	int Array[] = {1,2,3,4,5,6,7,8,9,0};
	int (*px)[2][2] = (int (*)[2][2])Array;
	printf("%d %d\r\n",(*px)[0][0],(*px)[0][1]);
	printf("%d %d\r\n",(*px)[1][0],(*px)[1][1]);
	px++;
	printf("%d %d\r\n",(*px)[1][0],(*px)[1][1]);
	return 0;
	
}