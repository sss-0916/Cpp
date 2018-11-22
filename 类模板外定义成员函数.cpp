/*
**	类模板外定义成员函数
*/

#define _CRT_SECURE_NO_WARNINGS

#include "iostream"
using namespace std;

template <class T>
class Compare
{
public:
	Compare(T, T);
	T max();
	T min();
private:
	T x;
	T y;
};

template <class T>
Compare<T>::Compare(T a, T b)
{
	x = a;
	y = b;
}

template <class T>
T Compare<T>::max()
{
	return (x > y) ? x : y;
}

template <class T>
T Compare<T>::min()
{
	return (x < y) ? x : y;
}

int main()
{
	Compare<int> cmp1(3, 7);
	cout << cmp1.max() << " is the maximum of two" 
		"integer numbers. " << endl;
	cout << cmp1.min() << " is the minimum of two"
		"integer numbers. " << endl;
	Compare<double> cmp2(1.3, 4.9);
	cout << cmp2.max() << " is the maximum of two"
		"integer numbers. " << endl;
	cout << cmp2.min() << " is the minimum of two"
		"integer numbers. " << endl;
	Compare<char> cmp3('a', 'A');
	cout << cmp3.max() << " is the maximum of two"
		"integer numbers. " << endl;
	cout << cmp3.min() << " is the minimum of two"
		"integer numbers. " << endl;
	system("pause");
	return 0;
}