#include "iostream"
#include "deque"
#include "vector"
#include "algorithm"
#include "functional"
#include "iterator"
using namespace std;

int main()
{
	int dim[] = { 1, 2, 4, 6, 5, 8, 7, 9, 3 };		//初始数组，用来初始化vector和deque
	vector<int> v1, v2, v3(9);
	deque<int> d1, d2, d3(9);
	v1.assign(dim, dim + 9);
	copy(v1.begin(), v1.end(), back_inserter(d1));		//初始化d1
	cout << "original array dim is below: " << endl;
	copy(dim, dim + 9, ostream_iterator<int>(cout, ", "));
	cout << endl;
	cout << "original vector v1 is below: " << endl;
	copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, ", "));
	cout << endl;
	cout << "original deque d1 is below: " << endl;
	copy(d1.begin(), d1.end(), ostream_iterator<int>(cout, ", "));
	cout << endl;
	v2 = v1;
	d2 = d1;
	partial_sort(v1.begin(), v1.begin() + 5, v1.end());
	cout << "vector v1 is sorted by partial_sort() algorithm: " << endl;
	copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, ", "));
	cout << endl;
	partial_sort(d1.begin(), d1.begin() + 5, d1.end());
	cout << "deque d1 is sorted by partial_sort() algorithm: " << endl;
	copy(d1.begin(), d1.end(), ostream_iterator<int>(cout, ", "));
	cout << endl;
	cout << "-----------------------------------------------" << endl;
	cout << "vector v2 is the same as the original v1: " << endl;
	copy(v2.begin(), v2.end(), ostream_iterator<int>(cout, ", "));
	cout << endl;
	cout << "deque d2 is the same as the original d1: " << endl;
	copy(d2.begin(), d2.end(), ostream_iterator<int>(cout, ", "));
	cout << endl;
	partial_sort(v2.begin(), v2.begin() + 5, v2.end(), greater<int>());
	cout << "vector v2 is sorted by partial_sort() algorithm in greater<int>(): " << endl;
	copy(v2.begin(), v2.end(), ostream_iterator<int>(cout, ", "));
	cout << endl;
	partial_sort(d2.begin(), d2.begin() + 5, d2.end(), greater<int>());
	cout << "deque d2 is sorted by partial_sort() algorithm in greater<int>(): " << endl;
	copy(d2.begin(), d2.end(), ostream_iterator<int>(cout, ", "));
	cout << endl;
	partial_sort_copy(dim, dim + 9, v3.begin(), v3.end());
	cout << "array dim is sorted by partial_sort_copy() in vector v3: " << endl;
	copy(v3.begin(), v3.end(), ostream_iterator<int>(cout, ", "));
	cout << endl;
	partial_sort_copy(v3.begin(), v3.end(), d3.begin(), d3.end(), greater<int>());
	cout << "vector v3 is sorted by partial_sort_copy() in deque d3: " << endl;
	copy(d3.begin(), d3.end(), ostream_iterator<int>(cout, ", "));
	cout << endl;
	system("pause");
	return 0;
}