/*
**	运算符+重载可以实现两个复数相加,还可以整数和一个复数相加
*/

#define _CRT_SECURE_NO_WARNINGS

#include "iostream"
using namespace std;

class Complex
{
public:
	/*---构造函数---*/
	Complex(double, double);
	/*---运算符+的重载---*/
	friend Complex operator+(Complex& c1, Complex& c2);
	/*---函数重载---*/
	friend Complex operator+(Complex& c3, int c4);
	/*---函数重载---*/
	friend Complex operator+(int c5, Complex& c6);
	/*---复数打印---*/
	void display();
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

/*---运算符+的重载---*/
Complex operator+(Complex& c1, Complex& c2)
{
	Complex c(0, 0);
	c.real = c1.real + c2.real;
	c.imag = c1.imag + c2.imag;
	return c;
}

/*---函数重载---*/
Complex operator+(Complex& c3, int c4)
{
	Complex c(0, 0);
	c.real = c3.real + c4;
	c.imag = c3.imag;
	return c;
}

/*---函数重载---*/
Complex operator+(int c5, Complex& c6)
{
	Complex c(0, 0);
	c.real = c6.real + c5;
	c.imag = c6.imag;
	return c;
}

/*---复数打印---*/
void Complex::display()
{
	cout << real << " + " << imag << "i" << endl;
}

int main()
{
	int c1 = 5;
	Complex c2(4, 3), c3(3.9, 4.5);
	Complex c(0, 0);
	cout << "c1: " << c1 << endl;
	cout << "c2: ";
	c2.display();
	cout << "c3: ";
	c3.display();
	cout << endl;
	cout << "c1 + c2: ";
	c = c1 + c2;
	c.display();
	cout << "c2 + c1: ";
	c = c2 + c1;
	c.display();
	cout << "c2 + c3: ";
	c = c2 + c3;
	c.display();
	c = c1 + c2;
	system("pause");
	return 0;
}