#include <stdio.h>

int main()
{
	int x = 1;
	int y = 2;
    unsigned z = 2;
	printf("与运算:%d\r\n",x&y);
	printf("或运算:%d\r\n",x|y);
	printf("异或运算:%d\r\n",x^y);
	printf("非运算:%d\r\n",~y);
	printf("有符号左移:%d\r\n",y<<1);
	printf("无符号左移:%d\r\n",z<<1);
    
    printf("有符号右移:%d\r\n",y>>1);
	printf("无符号右移:%d\r\n",z>>1);
	system("pause");
}