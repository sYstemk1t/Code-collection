#include <stdio.h>
#include <Windows.h>
/*
int fun(int *a,int len)
{
	int i = 0;
	for(;i<len;i++)
	{
		printf("%d\r\n",a[i]);
	}
	return 0;
}
*/
/*
int str(char c[])
{
	int i = 0;
	while(c != '\0')
	{
		printf("%c",c[i]);
		i++;
		if(c[i] == '\0')
		{
			printf("\r\n");
			printf("%d\r\n",i);
			return 0;
		}
	}
	
}
*/

/*
int Add(int x)
{
	return x = x + 1;
}
*/

int fun(int *a,int len)
{
	int i = 0;
	for(;i<len;i++)
	{
		printf("%d\r\n",a[i]);
		printf("%d\r\n",*(a+i));
	}
	return 0;
}

void Print(int Array[],int Index)
{
	int i = 0;
	for(;i<Index;i++)
	{
		printf("%d\r\n",Array[i]);
		printf("%d\r\n",*(Array+i));
	}
}

int main()

{
	/*int i = 0;
	Add(i);
	printf("%d\r\n",i);
	*/
	int Array[]= {1,2,3,4,5,6,7,8,9,10};
	int Index = sizeof(Array) / sizeof(int);

	Print(Array,Index);
	fun(Array,Index);
	return 0;
}