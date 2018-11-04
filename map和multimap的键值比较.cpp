#include "iostream"
#include "map"
#include "functional"
using namespace std;

int main()
{
	typedef map<int, double, less<int>> MAP;
	typedef multimap<int, double, greater<int>> MMAP;
	MAP m1;
	MMAP m2;
	MAP::key_compare kc1 = m1.key_comp();
	MMAP::key_compare kc2 = m2.key_comp();
	bool r = kc1(2, 3);
	bool rm = kc2(3, 4);
	if (r)
	{
		cout << "kc1(2, 3)返回值为true. " << endl;
	}
	else
	{
		cout << "kc1(2, 3)返回值为false. " << endl;
	}
	if (rm)
	{
		cout << "kc2(3, 4)返回值为true. " << endl;
	}
	else
	{
		cout << "kc2(3, 4)返回值为false. " << endl;
	}
	system("pause");
	return 0;
}