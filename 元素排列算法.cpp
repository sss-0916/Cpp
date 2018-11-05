#include "iostream"
#include "vector"
#include "deque"
#include "algorithm"
#include "iterator"
using namespace std;

int main()
{
	deque<int> d1;
	vector<int> v1;
	int dim[] = { 1, 2, 3 };
	v1.assign(dim, dim + 3);
	cout << "v1: ";
	copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, ", "));
	cout << endl;
	cout << "d1: ";
	copy(v1.begin(), v1.end(), back_inserter(d1));
	copy(d1.begin(), d1.end(), ostream_iterator<int>(cout, ", "));
	cout << endl;
	while (next_permutation(d1.begin(), d1.end()))		//ÉýÐòÅÅÁÐ
	{
		copy(d1.begin(), d1.end(), ostream_iterator<int>(cout, ", "));
		cout << endl;
	}
	cout << "ÅÅÐòºód1: ";
	copy(d1.begin(), d1.end(), ostream_iterator<int>(cout, ", "));
	cout << endl;
	cout << "×¼±¸°´½µÐòÅÅÐòd1: ";
	copy(d1.begin(), d1.end(), ostream_iterator<int>(cout, ", "));
	cout << endl;
	while (prev_permutation(d1.begin(), d1.end()))
	{
		copy(d1.begin(), d1.end(), ostream_iterator<int>(cout, ", "));
		cout << endl;
	}
	cout << "½µÐòºód1: ";
	copy(d1.begin(), d1.end(), ostream_iterator<int>(cout, ", "));
	cout << endl;
	while (prev_permutation(d1.begin(), d1.end()))
	{
		copy(d1.begin(), d1.end(), ostream_iterator<int>(cout, ", "));
		cout << endl;
	}
	cout << "ÔÙ´Î½µÐòÅÅÐòºó: ";
	copy(d1.begin(), d1.end(), ostream_iterator<int>(cout, ", "));
	cout << endl;
	system("pause");
	return 0;
}