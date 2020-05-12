#include <stdio.h>

struct Student{
	int x;
	int y;

};

int main()
{

	struct Student St[10];			//整体宽度80
	struct Student St1;				//8字节
	struct Student *St2[10];		//40字节，4字节*10个成员
	struct Student *St3;			//4字节，每个指针占用4字节
	int x = sizeof(St);				
	int y = sizeof(St1);
	int z = sizeof(St2);
	int t = sizeof(St3);

	return 0;
}