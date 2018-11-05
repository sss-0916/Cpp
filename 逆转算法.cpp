#include "iostream"
#include "list"
#include "vector"
#include "algorithm"
#include "iterator"
using namespace std;

void print(int& ele)
{
	cout << ele << ", ";
}

int main()
{
	int dim[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	vector<int> v1, v2;
	list<int> l1, l2;
	v1.assign(dim, dim + 8);
	cout << "v1: " << endl;
	for_each(v1.begin(), v1.end(), print);
	cout << endl;
	reverse(v1.begin(), v1.end());
	cout << "reverse v1: " << endl;
	for_each(v1.begin(), v1.end(), print);
	cout << endl;
	copy(v1.rbegin(), v1.rend(), back_inserter(l1));
	cout << "l1: " << endl;
	for_each(l1.begin(), l1.end(), print);
	cout << endl;
	reverse(v1.begin() + 2, v1.end() - 2);
	cout << "part of v1 reverse: " << endl;
	for_each(v1.begin(), v1.end(), print);
	cout << endl;
	/*----*/
	list<int>::iterator posf = l1.begin();
	list<int>::iterator pose = l1.end();
	advance(posf, 2);
	advance(pose, -2);
	reverse(posf, pose);
	cout << "part of l1 reverse: " << endl;
	for_each(l1.begin(), l1.end(), print);
	cout << endl;
	reverse_copy(v1.begin(), v1.end(), back_inserter(v2));
	cout << "v2: " << endl;
	for_each(v2.begin(), v2.end(), print);
	cout << endl;
	cout << "l2: " << endl;
	reverse_copy(l1.begin(), l1.end(), ostream_iterator<int>(cout, ", "));
	cout << endl;
	system("pause");
	return 0;
}