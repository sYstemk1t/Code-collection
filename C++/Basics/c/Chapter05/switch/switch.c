#include <stdio.h>
int main()
{
	int i = 0;
	scanf("%d",&i);
	switch (i)
	{
	case 1:
		printf("1\r\n");
		break;
	case 2:
		printf("2\r\n");
		break;
	case 3:
		printf("3\r\n");
		break;
	case 4:
		printf("4\r\n");
		break;
	default:
		printf("No\r\n");
	}
	return 0;
}