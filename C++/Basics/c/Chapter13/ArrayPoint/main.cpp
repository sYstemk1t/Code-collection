#include <stdio.h>
int main()
{
	int Array[] = {1,2,3,4,5,6,7,8,9,10};
	int* x = Array;				//类型是int*
	int* y = (int*)&Array;		//数组指针
	int(*px)[5];
	char(*px1)[5];
	int(*px2)[2][5];
	char(*px3)[3][3][3];
	px = (int(*)[5])1;
	px1 = (char(*)[5])1;
	px2 = (int(*)[2][5])1;
	px3 = (char(*)[3][3][3])1;
	px++;
	px1++;
	px2++;
	px3++;
	printf("%d %d %d %d\r\n",px,px1,px2,px3);
	
	return 0;
}