#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <functional>
#include <iterator>
using namespace std;

void print(int& ele)
{
	cout << ele << ", ";
}

int main()
{
	int dim[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	vector<int> v1;
	list<int> l2, l3;
	v1.assign(dim, dim + 9);
	cout << "v1: " << endl;
	for_each(v1.begin(), v1.end(), print);
	cout << endl;
	//l2�е�Ԫ�طֱ��-1
	transform(v1.begin(), v1.end(), back_inserter(l2), negate<int>());
	cout << "l2: " << endl;
	for_each(l2.begin(), l2.end(), print);
	cout << endl;
	//l2�е�Ԫ�طֱ��10
	transform(l2.begin(), l2.end(), l2.begin(), bind2nd(multiplies<int>(), 10));
	cout << "l2 * 10: " << endl;
	for_each(l2.begin(), l2.end(), print);
	cout << endl;
	//l2��Ԫ�س�-1���������
	cout << "l2(-): " << endl;
	transform(l2.rbegin(), l2.rend(), ostream_iterator<int>(cout, ","), negate<int>());
	cout << endl;
	//l2����2�������
	cout << "list 12(/2, reverse_direction): " << endl;
	transform(l2.rbegin(), l2.rend(), ostream_iterator<int>(cout, ", "), bind2nd(divides<int>(), 2));
	cout << endl;
	//�����ǵ�һ���÷�
	cout << "l2: " << endl;
	for_each(l2.begin(), l2.end(), print);
	cout << endl;
	cout << "l2 * v1 : " << endl;
	transform(v1.begin(), v1.end(), l2.begin(), l2.end(), multiplies<int>());
	copy(l2.begin(), l2.end(), ostream_iterator<int>(cout, ", "));
	cout << endl;
	cout << "l2: " << endl;
	transform(l2.begin(), l2.end(), l2.begin(), ostream_iterator<int>(cout, ","), multiplies<int>());
	cout << endl;
	cout << "l2: " << endl;
	for_each(l2.begin(), l2.end(), print);
	cout << endl;
	cout << "l3 = v1 + l2: " << endl;
	transform(v1.begin(), v1.end(), l2.begin(), back_inserter(l3), plus<int>());
	for_each(l3.begin(), l3.end(), print);
	cout << endl;
	cout << "cout l2 - l3: " << endl;
	transform(l2.begin(), l2.end(), l3.begin(), ostream_iterator<int>(cout, ", "), minus<int>());
	cout << endl;
	system("pause");
	return 0;
}