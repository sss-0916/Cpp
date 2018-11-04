#include "iostream"
#include "map"
#include "functional"
using namespace std;

typedef pair<int, double> custompair;

void print(map<int, double>& m)
{
	map<int, double>::iterator it;
	for (it = m.begin(); it != m.end(); it++)
	{
		custompair p1 = (pair<int, double>)(*it);
		cout << p1.first << ", ";
		cout << std::fixed << cout.precision(2) << p1.second << "; " << endl;
	}
}

void printm(multimap<int, double>& m)
{
	multimap<int, double>::iterator it;
	for (it = m.begin(); it != m.end(); it++)
	{
		custompair p1 = (pair<int, double>)(*it);
		cout << p1.first << ", ";
		cout << std::fixed << cout.precision(2) << p1.second << "; " << endl;
	}
}

void printg(map<int, double, greater<int>>& m)
{
	map<int, double, greater<int>>::iterator it;
	for (it = m.begin(); it != m.end(); it++)
	{
		custompair p1 = (pair<int, double>)(*it);
		cout << p1.first << ", ";
		cout << std::fixed << cout.precision(2) << p1.second << "; " << endl;
	}
}

void printg_m(multimap<int, double, greater<int>>& m)
{
	multimap<int, double, greater<int>>::iterator it;
	for (it = m.begin(); it != m.end(); it++)
	{
		custompair p1 = (pair<int, double>)(*it);
		cout << p1.first << ", ";
		cout << std::fixed << cout.precision(2) << p1.second << "; " << endl;
	}
}

void printl_m(multimap<int, double, less<int>>& m)
{
	multimap<int, double, less<int>>::iterator it;
	for (it = m.begin(); it != m.end(); it++)
	{
		custompair p1 = (pair<int, double>)(*it);
		cout << p1.first << ", ";
		cout << std::fixed << cout.precision(2) << p1.second << "; " << endl;
	}
}

int main()
{
	map<int, double>::iterator itm;
	map<int, double, greater<int>>::iterator itmg;
	map<int, double, less<int>>::iterator itml;
	map<int, double> m1;
	map<int, double, greater<int>> m2;
	multimap<int, double> m3;
	multimap<int, double, greater<int>> m4;
	m1.insert(custompair(1, 2.0));
	m1.insert(custompair(2, 5.0));
	m1.insert(custompair(3, 7.0));
	m1.insert(custompair(4, 8.0));
	m1.insert(custompair(5, 11.0));
	m1.insert(custompair(6, 6.0));
	cout << "m1: " << endl;
	print(m1);
	m2.insert(custompair(1, 2.0));
	m2.insert(custompair(2, 5.0));
	m2.insert(custompair(3, 7.0));
	m2.insert(custompair(4, 8.0));
	m2.insert(custompair(5, 11.0));
	m2.insert(custompair(6, 6.0));
	cout << "m2(great<int>): " << endl;
	printg(m2);
	m3.insert(custompair(1, 2.0));
	m3.insert(custompair(2, 5.0));
	m3.insert(custompair(3, 7.0));
	m3.insert(custompair(4, 8.0));
	m3.insert(custompair(5, 11.0));
	m3.insert(custompair(6, 6.0));
	cout << "m3: " << endl;
	printm(m3);
	m4.insert(custompair(1, 2.0));
	m4.insert(custompair(2, 5.0));
	m4.insert(custompair(3, 7.0));
	m4.insert(custompair(4, 8.0));
	m4.insert(custompair(5, 11.0));
	m4.insert(custompair(6, 6.0));
	cout << "m4(greater<int>): " << endl;
	printg_m(m4);
	map<int, double>::allocator_type ma;
	ma = m2.get_allocator();
	map<int, double> m5(less<int>(), ma);
	m5.insert(custompair(16, 1.0));
	m5.insert(custompair(15, 7.0));
	m5.insert(custompair(24, 9.0));
	m5.insert(custompair(23, 13.0));
	m5.insert(custompair(32, 21.0));
	m5.insert(custompair(11, 27.0));
	cout << "m5(less<int>:)" << endl;
	printl_m(m5);
	system("pause");
	return 0;
}