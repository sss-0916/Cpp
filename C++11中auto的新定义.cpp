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

//auto���ͱ���������Ϊ����,��Ϊû�г�ʼ������ȱʡֵҲ����
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
	//auto���Ͷ�����������ʼ��
	//auto e;
	auto m = 1, n = 2;
	//��ͬһ�ж�����auto��������������ͬ
	//auto p = 1, q = 2.0;
	// ��b,c,d������
	cout << typeid(b).name() << endl;
	cout << typeid(c).name() << endl;
	cout << typeid(d).name() << endl;
	auto f = test(a, b);
	cout << f << endl;	//�������������ֵ����ʱ����auto���ͱ������ܷǳ�����
	auto pa1 = &a;
	*pa1 = 20;
	cout << "auto pa1 = &a :" << a << endl;
	auto* pa2 = &a;
	*pa2 = 30;
	cout << "auto* pa = &a :" << a << endl;
	//������֪,����ָ�����ʱauto*��auto��һ����
	//����ע�⣬��������ʱֻ����auto&,&����ʡ
	auto& ra = a;
	ra = 40;
	cout << "auto& ra = a: " << a << endl;
	//���һ��pa1,pa2,��ra������
	cout << "pa1������: " << typeid(pa1).name() << endl;
	cout << "pa2������: " << typeid(pa2).name() << endl;
	cout << "ra������: " << typeid(ra).name() << endl;
	//auto�����ƣ�����ȥ�������ռ������ݵ��������
	auto n_s = N1::N2::b;
	cout << "N1::N2::b: " << n_s << endl;
	system("pause");
	return 0;
}