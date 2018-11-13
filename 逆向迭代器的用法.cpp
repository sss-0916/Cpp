#include "iostream"
#include "list"
#include "vector"
#include "iterator"
#include "algorithm"
using namespace std;

void print(int ele)
{
	cout << ele << " ";
}


int main()
{
	list<int> l1;
	for (int i = 1; i <= 9; i++)
	{
		l1.push_back(i);
	}
	cout << "list l1: " << endl;
	for_each(l1.begin(), l1.end(), print);
	cout << endl;
	cout << "reverse list l1: " << endl;
	for_each(l1.rbegin(), l1.rend(), print);
	cout << endl;
	list<int>::iterator it;
	it = find(l1.begin(), l1.end(), 2);
	cout << "pos: " << *it << endl;
	list<int>::reverse_iterator itr(it);
	cout << "rpos: " << *itr << endl;
	system("pause");
	return 0;
}


	/*
	vector<int>::iterator pos;
	vector<int> v1;
	pos = find(v1.begin(), v1.end(), 5);
	vector<int>::reverse_iterator rpos(pos);
	cout << "*rpos: " << *rpos << endl;
	*/