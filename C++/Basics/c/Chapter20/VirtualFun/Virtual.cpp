#include <iostream>
using namespace std;
class A
{
public:
	int x;
	virtual void test()
	{
		printf("A\r\n");
	}
protected:
private:
};

class B : public A
{
public:
	void test()
	{
		printf("B\r\n");
	}
protected:
private:
};

void My_Print(A* p)
{
	p->test();
}

int main()
{
	A a;
	B b;
	My_Print(&a);

	return 0;

}