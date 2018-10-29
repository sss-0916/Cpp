#include "iostream"
using namespace std;

int main()
{
	long Aa = 11;
	long* B_pointer = &Aa;
	cout << "Aa的值为: " << Aa << endl << "Aa的地址为: " << B_pointer << endl;
	system("pause");
	return 0;
}