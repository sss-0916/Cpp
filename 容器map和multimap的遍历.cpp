#include "iostream"
#include "map"
#include "functional"
using namespace std;

typedef pair<int, double> mypair;

void origin(map<int, double, greater<int>>& m, multimap<int, double, greater<int>>& mm)
{
	m.insert(mypair(1, 5.0));
	m.insert(mypair(2, 7.0));
	m.insert(mypair(3, 7.0));
	m.insert(mypair(4, 17.0));
	m.insert(mypair(5, 11.0));
	mm.insert(mypair(1, 4.0));
	mm.insert(mypair(2, 8.0));
	mm.insert(mypair(3, 9.0));
	mm.insert(mypair(4, 12.0));
	mm.insert(mypair(5, 19.0));
}

void print(map<int, double, greater<int>>& m, multimap<int, double, greater<int>>& mm)
{
	map<int, double, greater<int>>::iterator it;
	multimap<int, double, greater<int>>::iterator itm;
	int size = m.size();
	cout << "map: " << endl;
	for (it = m.begin(); it != m.end(); it++)
	{
		mypair temp = *it;
		cout << temp.first << ", " << temp.second << ", " << endl;
	}
	int msize = mm.size();
	cout << "multimap: " << endl;
	for (itm = mm.begin(); itm != mm.end(); itm++)
	{
		mypair temp = *itm;
		cout << temp.first << ", " << temp.second << ", " << endl;
	}
	cout << endl;
}

int main()
{
	map<int, double, greater<int>> m1;
	multimap<int, double, greater<int>> m2;
	map<int, double, greater<int>>::iterator it;
	map<int, double, greater<int>>::reverse_iterator itr;
	multimap<int, double, greater<int>>::iterator itm;
	multimap<int, double, greater<int>>::reverse_iterator itrm;
	origin(m1, m2);
	print(m1, m2);
	it = m1.begin();
	mypair temp = *it;
	cout << "The first element is: " << temp.first << ", " << temp.second << "; " << endl;
	it = m1.end();
	temp = *(--it);
	cout << "The last element is: " << temp.first << ", " << temp.second << "; " << endl;
	itm = m2.begin();
	temp = *itm;
	cout << "The first element is: " << temp.first << ", " << temp.second << "; " << endl;
	itm = m2.end();
	temp = *itm;
	cout << "The last element is: " << temp.first << ", " << temp.second << "; " << endl;
	itr = m1.rbegin();
	temp = *itr;
	cout << "The reverse first element is: " << temp.first << ", " << temp.second << "; " << endl;
	itr = m1.rend();
	temp = *(--itr);
	cout << "The reverse last element is: " << temp.first << ", " << temp.second << "; " << endl;
	itrm = m2.rbegin();
	temp = *itrm;
	cout << "The reverse first element is: " << temp.first << ", " << temp.second << "; " << endl;
	itrm = m2.rend();
	temp = *(--itrm);
	cout << "The reverse last element is: " << temp.first << ", " << temp.second << "; " << endl;
	system("pause");
	return 0;
}