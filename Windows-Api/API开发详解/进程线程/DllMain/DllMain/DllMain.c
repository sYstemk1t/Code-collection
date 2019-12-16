#include <stdio.h>
#include <Windows.h>
#include <Psapi.h>
//链接
#pragma comment (lib,"Psapi.lib")

//使用__declspec(dllexport)声明导出函数
__declspec(dllexport) DWORD ExportExample(LPSTR szMsg, DWORD dwCode);


BOOL WINAPI DllMain(HINSTANCE hinstDLL,		//DLL模块的句柄
	DWORD fdwReason,		//调用情况
	LPVOID lpvReserved)		//reserved
{
	switch (fdwReason)					//在不同的情况下调用DllMain函数，分别处理
	{
	case DLL_PROCESS_ATTACH:			//加载DLL
	{
		char lpMainModuleName[MAX_PATH];
		char lpMessage[MAX_PATH + 64];
		//获取PID和主模块名
		DWORD dwPID = GetCurrentProcessId();

		GetModuleBaseName(GetCurrentProcessId(), NULL, lpMainModuleName, MAX_PATH);
		wsprintf(lpMessage, "Process Name :%s PID: %u", lpMainModuleName, dwPID);
		MessageBox(NULL, lpMessage, "msg.dll", MB_OK);
	}
	case DLL_THREAD_ATTACH:		//创建新线程
	{
		break;
	}
	case DLL_THREAD_DETACH:		//线程退出
	{
		break;
	}
	case DLL_PROCESS_DETACH:	//释放DLL
	{
		break;
	}
	return TRUE;
	}
}

/*************************************
* DWORD ExportExample(LPSTR szMsg, DWORD dwCode)
* 功能	导出函数，显示消息
*
* 参数	LPSTR szMsg	字符串； DWORD dwCode 整形
**************************************/

DWORD ExportExample(LPSTR szMsg, DWORD dwCode)
{
	LPVOID lpShowOut = HeapAlloc(GetProcessHeap(), 0, lstrlen(szMsg) + 100);
	wsprintf(lpShowOut, "%s,%d", szMsg, dwCode);
	MessageBox(NULL, lpShowOut, "由导出函数弹出的消息！", MB_OK);
	HeapFree(GetProcessHeap(), 0, lpShowOut);
	return 0;
}