/*
**	计算程序中创建了多少个类对象
*/

#define _CRT_SECURE_NO_WARNINGS

#include "iostream"
using namespace std;

class A
{
public:
	A()
	{
		++count;
	}
	A(const A& a)
	{
		++count;
	}
	static int get_count()
	{
		return count;
	}
private:
	static int count;
};

int A::count = 0;

void test_A()
{
	cout << A::get_count() << endl;
	A a1, a2;
	A a3(a1);
	cout << A::get_count() << endl;
}

int main()
{
	test_A();
	system("pause");
	return 0;
}