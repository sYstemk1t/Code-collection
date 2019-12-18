#include <stdio.h>
#include <windows.h>
#include <urlmon.h>

#pragma comment (lib,"urlmon")


int main1()
{
	char szUrl[MAX_PATH] = "c:\\windows\\system32\\notepad.exe";
	char szVirus[MAX_PATH] = "f:\\notepad.exe";

	URLDownloadToFile(NULL, szUrl, szVirus, 0, NULL);

	WinExec(szVirus, SW_SHOW);
	return 0;
}


