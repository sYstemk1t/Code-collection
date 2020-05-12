#include <iostream>
#include <string.h>
using namespace std;
class A
{
public:
	int a;
	int b;
	A(int a,int b)
	{
		this->a = a;
		this->b = b;
	}
	virtual void My_Print()
	{
		printf("%d %d",a,b);
	}
protected:
private:
};

class B : public A
{
public:
	int c;
	B(int a,int b,int c) : A(a,b)
	{
		this->c = c;
	}
	void SetC(int c)
	{
		this->c = c;
	}
	void My_Print()
	{
		A::My_Print();
		printf("%d",c);
	}
protected:
private:
};

void My_Print(A* p)
{
	p->My_Print();
}
int main()
{
	B a(1,2,3);
	My_Print(&a);
    return 0;
}