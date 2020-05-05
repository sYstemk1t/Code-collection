#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
int main()
{
	char Len1[9] = {'a','b','c'};
	char Len2[9] = "112233";
	//char* Len = "ABCEDFG";
	int i = strcmp(Len1,Len2);
	printf("%s",Len1);
	return 0;
}