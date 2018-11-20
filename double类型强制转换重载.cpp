/*
**	double类型强制转换运算符重载
*/

#define _CRT_SECURE_NO_WARNINGS

#include "iostream"
using namespace std;

class Complex
{
public:
	Complex(double, double);
	void display();
	friend Complex operator+(Complex& c1, double d);
	operator double();
private:
	double real;
	double imag;
};

/*---构造函数---*/
Complex::Complex(double r, double i)
{
	real = r;
	imag = i;
}

/*---复数的打印---*/
void Complex::display()
{
	cout << real << " + " << imag << "i" << endl;
}

/*---运算符＋的重载---*/
Complex operator+(Complex& c1, double d)
{
	Complex c(0, 0);
	c.real = c1.real + d;
	c.imag = c1.imag;
	return c;
}

/*---将一个复数类型转化为double型---*/
Complex::operator double()
{
	return real;
}

int main()
{
	Complex c(0, 0), c1(1, 2);
	double d = 4.8;
	cout << "c1: " << endl;
	c1.display();
	cout << "d: " << d << endl;
	c = c1 + d;
	cout << "c1 + d: " << endl;
	c.display();
	cout << "double(c): " << endl;
	d = (double)c;
	cout << c << endl;
	system("pause");
	return 0;
}