#include "iostream"
#include "map"
#include "functional"
using namespace std;

typedef map<int, double, less<int>> MAP;
typedef multimap<int, double, greater<int>> MMAP;
typedef pair<MAP::iterator, bool> mypair;
typedef pair<int, double> myp;

void print(MAP& m)
{
	MAP::iterator it;
	myp temp_p;
	for (it = m.begin(); it != m.end(); it++)
	{
		temp_p = (*it);
		cout << temp_p.first << ", " << temp_p.second << endl;
	}
	cout << endl;
}

void printm(MMAP& m)
{
	MMAP::iterator it;
	myp temp_p;
	for (it = m.begin(); it != m.end(); it++)
	{
		temp_p = (*it);
		cout << temp_p.first << ", " << temp_p.second << endl;
	}
	cout << endl;
}

int main()
{
	MAP m1;
	MMAP m2;
	MMAP::iterator ita, itb;
	mypair p1, p2;
	MAP::value_compare vc1 = m1.value_comp();
	MMAP::value_compare vc2 = m2.value_comp();
	p1 = m1.insert(map<int, double>::value_type(1, 10));
	p2 = m1.insert(map<int, double>::value_type(2, 5));
	cout << "�������m1: " << endl;
	print(m1);
	if (vc1(*p1.first, *p2.first) == true)
	{
		cout << " Ԫ��(1, 10)��Ԫ��(2, 5)֮ǰ." << endl;
	}
	else
	{
		cout << " Ԫ��(1, 10)��Ԫ��(2, 5)֮��." << endl;
	}
	ita = m2.insert(multimap<int, double>::value_type(1, 20));
	itb = m2.insert(multimap<int, double>::value_type(2, 50));
	cout << "�������m2: " << endl;
	printm(m2);
	if (vc2(*ita, *itb) == true)
	{
		cout << "Ԫ��(1, 20)��Ԫ��(2, 50)֮ǰ." << endl;
	}
	else
	{
		cout << "Ԫ��(1, 20)��Ԫ��(2, 50)֮��." << endl;
	}
	system("pause");
	return 0;
}