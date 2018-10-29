#include "iostream"
#include "cmath"
using namespace std;

class Calculator
{
public:
	Calculator();
	~Calculator();
	double x;
	double y;
	double Adder(double x, double y);
	double Substration(double x, double y);
	double Multiplication(double x, double y);
	double Division(double x, double y);
	double CPow(double x, double y);
	double CSqrt(double x);
};

Calculator::Calculator()
{
	x = 0;
	y = 0;
}

Calculator::~Calculator()
{

}

double Calculator::Adder(double x, double y)
{
	return x + y;
}

double Calculator::Substration(double x, double y)
{
	return x - y;
}

double Calculator::Multiplication(double x, double y)
{
	return x * y;
}

double Calculator::Division(double x, double y)
{
	if (y == 0)
	{
		return -1;
	}
	return x / y;
}

double Calculator::CPow(double x, double y)
{
	return pow(x, y);
}

double Calculator::CSqrt(double x)
{
	return sqrt(x);
}

int main()
{
	double x = 0;
	double y = 0;
	cout << "������x:";
	cin >> x;
	cout << endl;
	cout << "������y:";
	cin >> y;
	cout << endl;
	Calculator my;
	double he = my.Adder(x, y);
	cout << "����֮��:" << he << endl;
	double cha = my.Substration(x, y);
	cout << "����֮��:" << cha << endl;
	double ji = my.Multiplication(x, y);
	cout << "����֮��:" << ji << endl;
	double shang = my.Division(x, y);
	cout << "����֮��:" << shang << endl;
	double chengfang = my.CPow(x, y);
	cout << "X��Y�η�:" << chengfang << endl;
	double kaifang = my.CSqrt(x);
	cout << "X��ƽ����:" << kaifang << endl;
	cout << "����������˳���" << endl;
	system("pause");
	return 0;
}