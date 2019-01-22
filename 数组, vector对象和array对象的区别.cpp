#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main()
{
	// 数组
	double arr1[4] = {
		1.2, 2.4, 3.6, 4.8 
	};

	// vector
	vector<double> arr2(4);
	arr2[0] = 1.0 / 3.0;
	arr2[1] = 1.0 / 5.0;
	arr2[2] = 1.0 / 7.0;
	arr2[3] = 1.0 / 9.0;

	//array
	array<double, 4> arr3 = {
		3.14, 2.72, 1.62, 1.41
	};
	array<double, 4> arr4;

	arr4 = arr3;

	// 数组和array类对象存储在栈中, 而vector存储在自由存储区或堆中
	cout << "arr1[2]: " << arr1[2] << "at" << &arr1[2] << endl;
	cout << "arr2[2]: " << arr2[2] << "at" << &arr2[2] << endl;
	cout << "arr3[2]: " << arr3[2] << "at" << &arr3[2] << endl;
	cout << "arr4[2]: " << arr4[2] << "at" << &arr4[2] << endl;

	system("pause");
	return 0;
}