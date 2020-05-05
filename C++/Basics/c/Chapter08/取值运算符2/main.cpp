#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

		
int main()
{
	int x,y;			
	int* px;			
	int** px2;			
	int*** px3;	
	x = 10;			
	px = &x;			
	px2 = &px;			
	px3 = &px2;			
				
	y = *(*(*(px3)));
	printf("%d\r\n",y);
	return 0;
}		
			
			
			
