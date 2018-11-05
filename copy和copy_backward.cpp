#include "iostream"
#include "algorithm"
#include "vector"
#include "list"
#include "iterator"
using namespace std;

void print(int& ele)
{
	cout << ele << " ";
}

int main()
{
	int dim[] = { 1, 3, 5, 7, 9, 11, 32, 54, 65 };
	vector<int> v1;
	v1.assign(dim, dim + 9);
	cout << "v1: " << endl;
	for_each(v1.begin(), v1.end(), print);
	cout << endl;
	list<int> l1, l2;
	copy(v1.begin(), v1.end(), back_inserter(l1));
	cout << "l1: " << endl;
	for_each(l1.begin(), l1.end(), print);
	cout << endl;
	l2 = l1;
	cout << "l2: " << endl;
	copy(l2.begin(), l2.end(), ostream_iterator<int>(cout, ", "));		//将元素复制到cout中
	cout << endl; 
	copy_backward(v1.begin() + 2, v1.begin() + 7, l2.end());
	cout << "l2(modified) : " << endl;
	copy(l2.begin(), l2.end(), ostream_iterator<int>(cout, ", "));
	cout << endl;
	system("pause");
	return 0;
}