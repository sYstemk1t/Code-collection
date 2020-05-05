#include <stdio.h>

int main()
{
	int i;
	int j;
	int Array[3][4]  = {{1,2,3,4},
	{5,6,7,8},
	{9,10,11,12}};
	Array[0][0] = 19;
	for(i = 0;i<3;i++)
	{
		for(j = 0;j<4;j++)
		{
			printf("Array[%d]\r\n",Array[i][j]);
			
		}
	}
	
	return 0;
}