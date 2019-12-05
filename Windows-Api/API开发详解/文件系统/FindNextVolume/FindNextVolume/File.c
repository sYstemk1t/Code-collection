#include <Windows.h>
#include <stdio.h>
void main()

{

	CHAR szVolume[MAX_PATH] = { 0 };

	HANDLE hVolume = FindFirstVolumeA(szVolume, MAX_PATH);
	if (INVALID_HANDLE_VALUE == hVolume)
		return 0;
	//string strVolume = szVolume;
	printf("%s \n", szVolume);
	while (FindNextVolumeA(hVolume, szVolume, MAX_PATH))
	{
		printf("%s \n", szVolume);
	}


	FindVolumeClose(hVolume);//±ðÍüÁË¹Ø±Õ¾ä±ú
	system("pause");
}