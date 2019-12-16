#include <iostream>
using namespace std;



int main()
{
	int a = 20;
	int b = 10;

	(a < b ? a : b) = 30;

	printf("a=%d b = %d", a, b);
	system("pause");
}