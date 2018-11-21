/*
**	���������ʵ�ָ����ļӼ��˳�
*/

#define _CRT_SECURE_NO_WARNINGS

#include "iostream"
using namespace std;

class Complex
{
public:
	/*---���캯��---*/
	Complex(double, double);
	/*---�����+-/������---*/
	Complex operator+(Complex&);
	Complex operator-(Complex&);
	Complex operator*(Complex&);
	Complex operator/(Complex&);
	/*---������ӡ---*/
	void display();
private:
	double real;
	double imag;
};

/*---���캯��---*/
Complex::Complex(double r, double i)
{
	real = r;
	imag = i;
}

/*---�����+������---*/
Complex Complex::operator+(Complex& c1)
{
	Complex c(0, 0);
	c.real = real + c1.real;
	c.imag = imag + c1.imag;
	return c;
}

/*---�����-������---*/
Complex Complex::operator-(Complex& c2)
{
	Complex c(0, 0);
	c.real = real - c2.real;
	c.imag = imag - c2.imag;
	return c;
}

/*---�����*������---*/
Complex Complex::operator*(Complex& c3)
{
	Complex c(0, 0);
	c.real = real * c3.real - imag * c3.imag;
	c.imag = real * c3.imag + imag * c3.real;
	return c;
}

/*---�����/������---*/
Complex Complex::operator/(Complex& c4)
{
	Complex c(0, 0);
	c.real = (real * c4.real + imag * c4.imag) /
		(c4.real * c4.real + c4.imag * c4.imag);
	c.imag = (imag * c4.real - real * c4.imag) /
		(c4.real * c4.real + c4.imag * c4.imag);
	return c;
}

/*---������ӡ---*/
void Complex::display()
{
	cout << real << " + " << imag << "i" << endl;
}

int main()
{
	Complex c1(1, 2), c2(2, 3);
	Complex c(0, 0);
	cout << "c1: ";
	c1.display();
	cout << "c2: ";
	c2.display();
	cout << "c1 + c2 = ";
	c = c1 + c2;
	c.display();
	cout << "c1 - c2 = ";
	c = c1 - c2;
	c.display();
	cout << "c1 * c2 = ";
	c = c1 * c2;
	c.display();
	cout << "c1 / c2 = ";
	c = c1 / c2;
	c.display();
	system("pause");
	return 0;
}