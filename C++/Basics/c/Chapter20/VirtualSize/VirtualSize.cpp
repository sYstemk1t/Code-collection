#include <iostream>
using namespace std;
#include <string.h>
#include <Windows.h>
class A
{
public:
	int a;
	int b;
	virtual void My_Print()
	{
		printf("Hello");
	}
	virtual void My_Print1()
	{
		;
	}
	virtual void My_Print2()
	{
		;
	}
protected:
private:
};

int main()
{
	A a;
	printf("%d\r\n",sizeof(a));
	return 0;
}