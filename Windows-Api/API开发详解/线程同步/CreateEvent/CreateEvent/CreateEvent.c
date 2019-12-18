#include <stdio.h>
#include <windows.h>


#define BUFFER_SIZE 16	//数组长度	
#define FOR_TIMES 5		//超时时间

//事件对象必须定义在全局中
HANDLE hEvent;				//同步
BYTE lpSharedBuffer[16];	//共享内存

//函数声明
void UseEvents(void);
DWORD WINAPI EventFunction(LPVOID lpParam);

int main()
{
	UseEvents();
}

void UseEvents(void)
{
	HANDLE hThread;	//句柄
	hEvent = CreateEvent(
		NULL,	//默认安全属性
		TRUE,	//手工重置
		FALSE,	//初始化为未重置
		NULL	//未命名
		);
	if (hEvent == NULL)
	{
		printf("CreateEvent Error (%d)\n", GetLastError());
		return;
	}
	hThread = CreateThread(
		NULL,
		0,
		EventFunction,
		NULL,
		0,
		NULL
		);
	if (hThread == NULL)
	{
		printf("CreateThread Error (%d)\n", GetLastError());
		return;
	}
	Sleep(2000);			//休眠2000毫秒
	CopyMemory(lpSharedBuffer, "Event", lstrlen("event"));
	SetEvent(hEvent);
}


DWORD WINAPI EventFunction(LPVOID lpParam)
{
	DWORD dwWaitResult;
	dwWaitResult = WaitForSingleObject(
		hEvent,			//Event句柄
		INFINITE		//无限等待
		);

	if (dwWaitResult != WAIT_OBJECT_0)
	{
		printf("Wait Error: %d\n", GetLastError());
		return 0;
	}

	printf(lpSharedBuffer);

	if (!ResetEvent(hEvent))
	{
		printf("SetEvent Error: %d\n", GetLastError());
		return 0;
	}

	return 1;
}