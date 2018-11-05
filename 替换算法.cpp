#include "iostream"
#include "vector"
#include "list"
#include "algorithm"
#include "iterator"
#include "functional"
using namespace std;

int main()
{
	vector<int> v1;
	int dim[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	v1.assign(dim, dim + 9);
	cout << "v1: " << endl;
	copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, ", "));
	cout << endl;
	replace(v1.begin(), v1.end(), 7, 99);
	cout << "v1: " << endl;
	copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, ", "));
	cout << endl;
	replace_if(v1.begin(), v1.end(), bind2nd(less<int>(), 5), 11);
	cout << "v1: " << endl;
	copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, ", "));
	cout << endl;
	system("pause");
	return 0;
}