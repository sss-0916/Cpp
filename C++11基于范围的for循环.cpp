#include "iostream"
using namespace std;

/*
	实现对每个数组中的元素乘2，然后输出结果查看
*/

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	/*---方法一：普通方法---*/
	for (int i = 0; i < 10; i++)
	{
		arr[i] *= 2;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	/*---方法二：基于范围的ffor循环---*/
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