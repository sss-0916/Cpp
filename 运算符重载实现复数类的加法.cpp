/*
**	复数类的加法,不能重载为成员函数和友元函数
*/

#define _CRT_SECURE_NO_WARNINGS

#include "iostream"
using namespace std;

class ComplexNumber
{
public:
	/*---构造函数---*/
	ComplexNumber(double, double);
	double get_real();
	double get_imag();
	void display();
private:
	double real;
	double imag;
};

ComplexNumber::ComplexNumber(double r, double i)
{	
	real = r;
	imag = i;
}

double ComplexNumber::get_real()
{
	return real;
}

double ComplexNumber::get_imag()
{
	return imag;
}

void ComplexNumber::display()
{
	cout << real << " + " << imag << "i." << endl;
}

/*---运算符+的重载---*/
ComplexNumber operator+(ComplexNumber& cn1, ComplexNumber& cn2)
{
	double result_real = 0;
	double result_imag = 0;
	result_real = cn1.get_real() + cn2.get_real();
	result_imag = cn1.get_imag() + cn2.get_imag();
	ComplexNumber result(result_real, result_imag);
	return result;
}

int main()
{
	ComplexNumber cn1(1, 3);
	ComplexNumber cn2(2, 4.3);
	ComplexNumber result(0, 0);
	cout << "cn1: " << endl;
	cn1.display();
	cout << "cn2: " << endl;
	cn2.display();
	result = cn1 + cn2;
	cout << "result: " << endl;
	result.display();
	system("pause");
	return 0;
}