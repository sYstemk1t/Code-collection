#include <windows.h> 
#include <tchar.h> 
#include <stdio.h> 
#include <stdlib.h> 

wchar_t UserName[0x400];
wchar_t UserDomain[0x400];

/**
* 将wchar_t* 转成char*
*/
void w2c(char *pcstr, const wchar_t *pwstr, size_t len);

/**
* 将char* 转成 wchar_t*
*/
void c2w(wchar_t *pwstr, const char *str, size_t len);

int main(int agc, char* argv[])
{
	GetEnvironmentVariableW(L"USERNAME", UserName, 0x400);
	GetEnvironmentVariableW(L"USERDOMAIN", UserDomain, 0x400);
	wprintf(L"the login userName is %s and the domain is %s\n", UserName, UserDomain);
	char *pUserName = (char *)malloc(sizeof(char)*(2 * wcslen(UserName) + 1));
	char *pUserDomain = (char *)malloc(sizeof(char)*(2 * wcslen(UserDomain) + 1));
	memset(pUserName, 0, 2 * wcslen(UserName) + 1);
	w2c(pUserName, UserName, 2 * wcslen(UserName) + 1);

	memset(pUserDomain, 0, 2 * wcslen(UserDomain) + 1);
	w2c(pUserDomain, UserDomain, 2 * wcslen(UserDomain) + 1);
	printf("the login userName is %s and the domain is %s\n", pUserName, pUserDomain);
	free(pUserName);
	free(pUserDomain);

	char c[] = "this is from ascii";
	wchar_t *wc = (wchar_t*)malloc(sizeof(wchar_t)*(strlen(c) / 2) + 1);
	memset(wc, 0, wcslen(wc) + 1);
	c2w(wc, c, wcslen(wc) + 1);
	printf("%s\n", c);
	wprintf(L"%s\n", wc);
	free(wc);
	return 0;
}

//将wchar_t* 转成char*的实现函数如下：
void w2c(char *pcstr, const wchar_t *pwstr, size_t len)
{
	int nlength = wcslen(pwstr);
	//获取转换后的长度
	int nbytes = WideCharToMultiByte(0, // specify the code page used to perform the conversion
		0,         // no special flags to handle unmapped characters
		pwstr,     // wide character string to convert
		nlength,   // the number of wide characters in that string
		NULL,      // no output buffer given, we just want to know how long it needs to be
		0,
		NULL,      // no replacement character given
		NULL);    // we don't want to know if a character didn't make it through the translation
	// make sure the buffer is big enough for this, making it larger if necessary
	if (nbytes>len)   nbytes = len;
	// 通过以上得到的结果，转换unicode 字符为ascii 字符
	WideCharToMultiByte(0, // specify the code page used to perform the conversion
		0,         // no special flags to handle unmapped characters
		pwstr,     // wide character string to convert
		nlength,   // the number of wide characters in that string
		pcstr, 	   // put the output ascii characters at the end of the buffer
		nbytes,    // there is at least this much space there
		NULL,      // no replacement character given
		NULL);
}

void c2w(wchar_t *pwstr, const char *str, size_t len)
{
	if (str)
	{
		size_t nu = strlen(str);
		size_t n = (size_t)MultiByteToWideChar(0, 0, (const char *)str, (int)nu, NULL, 0);
		if (n >= len)n = len - 1;
		MultiByteToWideChar(0, 0, (const char *)str, (int)nu, pwstr, (int)n);
		pwstr[n] = 0;
	}
}