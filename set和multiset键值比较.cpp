#include "iostream"
#include "set"
#include "algorithm"
#include "functional"
using namespace std;

void print(double ele)
{
	cout << ele << ", ";
}

template<class T> void prints(set<T>& s)
{
	for_each(s.begin(), s.end(), print);
	cout << endl;
}

template<class T> void printm(multiset<T, greater<T>>& s)
{
	for_each(s.begin(), s.end(), print);
	cout << endl;
}

int main()
{
	set<double, less<double>> s1;
	s1.insert(1);
	s1.insert(5);
	s1.insert(7);
	s1.insert(4);
	multiset<double, greater<double>> s2;
	s2.insert(7);
	s2.insert(9);
	s2.insert(4);
	s2.insert(6);
	set<double, less<double>>::key_compare kc1 = s1.key_comp();
	multiset<double, greater<double>>::key_compare kc2 = s2.key_comp();
	cout << "s1: " << endl;
	prints(s1);
	cout << "s2: " << endl;
	printm(s2);
	if (kc1(2, 3) == true)
	{
		cout << "The function object of s1 return true." << endl;
	}
	else
	{
		cout << "The function object of s1 return false." << endl;
	}
	if (kc2(2, 3) == true)
	{
		cout << "The function object of s2 return true." << endl;
	}
	else
	{
		cout << "The function object of s2 return false." << endl;
	}
	system("pause");
	return 0;
}