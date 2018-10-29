#include "iostream"
#include "cmath"
using namespace std;

double pow2(double x);
double pow3(double& y);

double pow2(double x)
{
	return x * x;
}

double pow3(double& y)
{
	return y * y * y;
}

int main()
{
	double A = 10;
	double B = 20;
	double C = 0;
	double D = 0;
	C = pow2(A);
	cout << "A: " << A << ",  pow2(A): " << C << endl;
	D = pow3(B);
	cout << "B: " << B << ",  pow3(B): " << D << endl;
	system("pause");
	return 0;
}