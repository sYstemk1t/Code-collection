#include <stdio.h>

void Function1()				
{				
	char ci = 0xFF;			
				
	short si = ci;			
				
	int ni = ci;			
}				
//无符号小转大				
void Function2()				
{				
	unsigned char ci = 0xFF;			
				
	unsigned short si = ci;			
				
	unsigned int ni = ci;			
}				



int main()
{
	__asm
	{
		mov eax,eax
	}
	Function1();
	Function2();
	return 0;
}
