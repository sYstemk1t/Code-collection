
#include <Windows.h>
#include <stdio.h>
#include <string.h>

#define BUFSIZE 1024

int main()
{
	CHAR szLogicalDriveStrings[BUFSIZE];
	ZeroMemory(szLogicalDriveStrings, BUFSIZE);//这也是一个API函数， 清空这个字符串
	GetLogicalDriveStrings(BUFSIZE - 1, szLogicalDriveStrings);

	//printf("%s\n", szLogicalDriveStrings);

	PCHAR psz;

	psz = (PCHAR)szLogicalDriveStrings;
	do{
		printf("%s\n", psz);
		psz += (strlen(psz) + 1);
	} while ((*psz) != '\0');

	system("pause");
}
