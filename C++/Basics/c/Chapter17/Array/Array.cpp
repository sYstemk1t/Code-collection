#include <stdio.h>
int main()
{
	int Array1[][2] = {{1,2},{3,4}};
	int(*p1)[2] = &Array1[0];
	for(int i = 0;i<4;i++)
	{
		printf("%d\r\n",(*p1)[i]);
	}
	return 0;
}