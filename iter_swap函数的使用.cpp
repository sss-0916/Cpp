#include "iostream"
#include "vector"
#include "list"
#include "algorithm"
#include "iterator"
using namespace std;

int main()
{
	int dim[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	double vdim[] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9 };
	vector<int> v1;
	list<double> l1;
	v1.assign(dim, dim + 9);
	copy(vdim, vdim + 9, back_inserter(l1));
	cout << "vector v1: " << endl;
	copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	cout << "list l1: " << endl;
	copy(l1.begin(), l1.end(), ostream_iterator<double>(cout, " "));
	cout << endl;
	vector<int>::iterator itv;
	itv = v1.end();
	itv--;
	iter_swap(v1.begin(), itv);
	cout << "vector v1(after swap): " << endl;
	copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	system("pause");
	return 0;
}