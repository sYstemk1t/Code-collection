#include<stdio.h>

struct man
{
    char name[10];
    int age;
}m[5];

int main()
{
	__asm
	{
		mov eax,eax
	}
	m[1].age = 10;
	
	strcpy(m[1].name,"zhangrui");
	m[2].age = 20;
	strcpy(m[2].name,"zhangsan");
    printf("name = %s, age = %d\n",m[1].name,m[1].age);
	printf("name = %s, age = %d\n",m[2].name,m[2].age);
    return 0;
}