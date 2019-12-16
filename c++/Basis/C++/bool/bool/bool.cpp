#include <iostream>
using namespace std;

bool max(int a, int b);

int main()
{
	bool i = max(3, 1);
	printf("%d\r\n", i);
	system("pause");
}

bool max(int a, int b)
{
	if (a > b)
	{
		return max;
	}

	else
	{
		return false;
	}

}