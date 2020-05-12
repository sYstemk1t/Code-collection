#include <stdio.h>

int __cdecl Add(int x,int y)
{
	return x+y;
}


int __stdcall Add1(int x,int y)
{
	return x+y;
}

int __fastcall Add2(int x,int y)
{
	return x+y;
}

int main()
{
	//Add(1,2);
	//Add1(1,2);
	Add2(1,2);
	return 0;
}