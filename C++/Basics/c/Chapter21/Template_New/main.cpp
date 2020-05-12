#include <iostream>
using namespace std;
template<class T,class M>
class Base
{
public:
	T x;
	T y;

	M a;
	M b;

	T max()
	{
		if(x>y)
		{
			cout << "x>y" << endl;
			return 0;
		}
		else
		{
			cout << "x<y" << endl;
			return 0;
		}
	}

	M Min()
	{
		if(a>b)
		{
			cout << "a>b" << endl;
			return a;
		}
		else
		{
			cout << "a<b" << endl;
			return b;
		}
	}
protected:
private:
};


int main()
{
	Base <int,char>base;
	base.a = 1;
	base.b = 2;
	base.max();
	base.x = 'a';
	base.y = 'b';
	base.Min();
	return 0;
}