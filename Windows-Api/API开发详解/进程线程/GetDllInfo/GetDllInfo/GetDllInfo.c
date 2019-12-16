#include <stdio.h>
#include <Windows.h>

int main()
{
	HINSTANCE hInstLib;
	char szDllDir[MAX_PATH];
	char szDllName[MAX_PATH];

	hInstLib = LoadLibrary(TEXT("msg.dll"));

	FreeLibrary(hInstLib);	//ÊÍ·ÅdllµÄ¾ä±ú
}
