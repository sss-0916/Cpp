#include "iostream"
using namespace std;

int main()
{
	/*---aΪ���������к곣�����滻����---*/
	const int a = 10;
	int* pa = (int*)&a;
	*pa = 100;
	cout << a << endl;
	cout << *pa << endl;
	/*---����ͨ����˵��aΪ����---*/
	int arr[a];	
	system("pause");
	return 0;
}