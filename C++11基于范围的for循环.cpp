#include "iostream"
using namespace std;

/*
	ʵ�ֶ�ÿ�������е�Ԫ�س�2��Ȼ���������鿴
*/

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	/*---����һ����ͨ����---*/
	for (int i = 0; i < 10; i++)
	{
		arr[i] *= 2;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	/*---�����������ڷ�Χ��fforѭ��---*/
	for (auto& e: arr)
	{
		e *= 2;
	}
	for (auto& e: arr)
	{
		cout << e << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}