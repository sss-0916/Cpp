#include "iostream"
#include "algorithm"
#include "list"
#include "vector"
#include "functional"
using namespace std;

void print(int& ele)
{
	cout << ele << " ";
}

int main()
{
	list<int> l1;
	vector<int> l2;
	pair<list<int>::iterator, vector<int>::iterator> p1;
	l1.push_back(1);
	l1.push_back(2);
	l1.push_back(3);
	l1.push_back(4);
	l1.push_back(7);
	l1.push_back(5);
	l2.push_back(1);
	l2.push_back(2);
	l2.push_back(3);
	l2.push_back(5);
	l2.push_back(6);
	l2.push_back(4);
	cout << "l1: " << endl;
	for_each(l1.begin(), l1.end(), print);
	cout << endl;
	cout << "l2: " << endl;
	for_each(l2.begin(), l2.end(), print);
	cout << endl;
	p1 = mismatch(l1.begin(), l1.end(), l2.begin());
	if (p1.first == l1.end())
	{
		cout << "no mismatch. " << endl;
	}
	else
	{
		cout << "The first mismatch: ";
		cout << *p1.first << ", " << *p1.second << endl;
	}
	p1 = mismatch(l1.begin(), l1.end(), l2.begin(), less_equal<int>());
	if (p1.first == l1.end())
	{
		cout << "no mismatch." << endl;
	}
	else
	{
		cout << "The first mismatch: ";
		cout << *p1.first << ", " << *p1.second << endl;
	}
	system("pause");
	return 0;
}