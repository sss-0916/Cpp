#include "iostream"
using namespace std;

namespace N1
{
	int a;
	namespace N2
	{
		typedef int DataType;
		DataType b = 110;
	}
}

int test(int a, int b)
{
	return (a + b) * b;
}

//auto类型变量不能作为函参,因为没有初始化，带缺省值也不行
//void test1(auto a)
//{
//
//}

int main()
{
	int a = 10;
	auto b = 20;
	auto c = 'c';
	auto d = 12.34;
	//auto类型定义变量必须初始化
	//auto e;
	auto m = 1, n = 2;
	//在同一行定义多个auto变量，类型需相同
	//auto p = 1, q = 2.0;
	// 看b,c,d的类型
	cout << typeid(b).name() << endl;
	cout << typeid(c).name() << endl;
	cout << typeid(d).name() << endl;
	auto f = test(a, b);
	cout << f << endl;	//不清楚函数返回值类型时，用auto类型变量接受非常方便
	auto pa1 = &a;
	*pa1 = 20;
	cout << "auto pa1 = &a :" << a << endl;
	auto* pa2 = &a;
	*pa2 = 30;
	cout << "auto* pa = &a :" << a << endl;
	//上述可知,定义指针变量时auto*和auto是一样的
	//但是注意，定义引用时只能用auto&,&不能省
	auto& ra = a;
	ra = 40;
	cout << "auto& ra = a: " << a << endl;
	//最后看一下pa1,pa2,和ra的类型
	cout << "pa1的类型: " << typeid(pa1).name() << endl;
	cout << "pa2的类型: " << typeid(pa2).name() << endl;
	cout << "ra的类型: " << typeid(ra).name() << endl;
	//auto的优势，无需去看命名空间中数据的相关类型
	auto n_s = N1::N2::b;
	cout << "N1::N2::b: " << n_s << endl;
	system("pause");
	return 0;
}