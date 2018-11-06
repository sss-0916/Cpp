#include "iostream"
#include "list"
#include "set"
#include "algorithm"
#include "functional"
#include "iterator"
using namespace std;
/*
	merge, set_union, set_difference, set_intersection, inplace_merge
*/

void print(int& ele)
{
	cout << ele << ", ";
}

int main()
{
	int dim[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int dim2[] = { 3, 4, 5, 6, 7, 8, 9, 10 };
	list<int> l1;
	set<int> s1;
	for (int i = 0; i < sizeof(dim) / sizeof(int); i++)
	{
		l1.push_back(dim[i]);
	}
	for (int i = 0; i < sizeof(dim2) / sizeof(int); i++)
	{
		s1.insert(dim2[i]);
	}
	cout << "list l1: " << endl;
	copy(l1.begin(), l1.end(), ostream_iterator<int>(cout, ", "));
	cout << endl;
	cout << "set s1: " << endl;
	copy(s1.begin(), s1.end(), ostream_iterator<int>(cout, ", "));
	cout << endl;
	/*---merge---*/
	cout << "l1 and s1 are merged: " << endl;
	merge(l1.begin(), l1.end(), s1.begin(), s1.end(), ostream_iterator<int>(cout, ", "));
	cout << endl;
	/*---set_union---*/
	cout << "l1 and s1 are merged by set_union() algorithm: " << endl;
	set_union(l1.begin(), l1.end(), s1.begin(), s1.end(), ostream_iterator<int>(cout, ", "));
	cout << endl;
	/*---set_difference---*/
	cout << "l1 and s1 are merged by set_difference() algorithm: " << endl;
	set_difference(l1.begin(), l1.end(), s1.begin(), s1.end(), ostream_iterator<int>(cout, ", "));
	cout << endl;
	/*---set_intersection---*/
	cout << "l1 and s1 are merged by set_intersection() algorithm: " << endl;
	set_intersection(l1.begin(), l1.end(), s1.begin(), s1.end(), ostream_iterator<int>(cout, ", "));
	cout << endl;
	/*---inplace_merge---*/
	cout << "l1 ang s1 are merged by inplace_merge() algorithm: " << endl;
	copy(s1.begin(), s1.end(), back_inserter(l1));
	list<int>::iterator pos;
	pos = find(l1.begin(), l1.end(), 3);
	pos = find(++pos, l1.end(), 3);
	pos++;
	inplace_merge(l1.begin(), pos, l1.end());
	l1.sort();
	for_each(l1.begin(), l1.end(), print);
	cout << endl;
	system("pause");
	return 0;
}