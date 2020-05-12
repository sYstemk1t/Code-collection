#include <stdio.h>

int main()
{
	int Array[][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	
	};
	int (*px)[3] = &Array[0];
	 
	for(int i = 0;i<3;i++)
	{
		printf("%d\r\n",(*px)[i]);
		px++;
	}
	


	return 0;
}