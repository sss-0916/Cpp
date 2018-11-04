#include "iostream"
#include "map"
#include "functional"
using namespace std;

int main()
{
	map<int, double, greater<int>> m1;
	multimap<int, double, greater<int>> m2;
	typedef pair<int, double> mypair;
	m1.insert(mypair(1, 5.0));
	m1.insert(mypair(2, 7.0));
	m1.insert(mypair(3, 7.0));
	m1.insert(mypair(4, 17.0));
	m1.insert(mypair(5, 11.0));
	m2.insert(mypair(1, 4.0));
	m2.insert(mypair(2, 8.0));
	m2.insert(mypair(3, 9.0));
	m2.insert(mypair(4, 12.0));
	m2.insert(mypair(5, 19.0));
	int size = m1.size();
	int max_size = m1.max_size();
	cout << "The size of m1 is: " << size << endl << "The max_size of m1 is: " << max_size << endl;
	int m_size = m2.size();
	int m_max_size = m2.max_size();
	cout << "The size of m2 is: " << m_size << endl << "The max_size of m2 is: " << m_max_size << endl;
	system("pause");
	return 0;
}