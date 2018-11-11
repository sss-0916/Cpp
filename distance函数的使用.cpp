#include "iostream"
#include "list"
#include "algorithm"
#include "iterator"
using namespace std;

int main()
{
	int dim[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	list<int> l1;
	copy(dim, dim + 9, back_inserter(l1));
	cout << "list l1: " << endl;
	copy(l1.begin(), l1.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	list<int>::iterator it;
	it = find(l1.begin(), l1.end(), 5);
	if (it != l1.end())
	{
		cout << "the distance between beginning and 5: " << distance(l1.begin(), it) << endl;
	}
	else
	{
		cout << "5 is not found." << endl;
	}
	system("pause");
	return 0;
}