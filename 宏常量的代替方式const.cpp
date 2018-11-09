#include "iostream"
using namespace std;

int main()
{
	/*---a为常量，具有宏常量的替换属性---*/
	const int a = 10;
	int* pa = (int*)&a;
	*pa = 100;
	cout << a << endl;
	cout << *pa << endl;
	/*---编译通过，说明a为常量---*/
	int arr[a];	
	system("pause");
	return 0;
}