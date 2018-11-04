#include "iostream"
#include "set"
#include "functional"
using namespace std;

void output(set<int>& s)
{
	set<int>::iterator it;
	for (it = s.begin(); it != s.end(); it++)
	{
		cout << " " << *it << ", ";
	}
	cout << endl;
}

void outputm(multiset<int>& s)
{
	multiset<int>::iterator it;
	for (it = s.begin(); it != s.end(); it++)
	{
		cout << " " << *it << ", ";
	}
	cout << endl;
}

int main()
{
	set<int> s1;
	s1.insert(10);
	s1.insert(15);
	s1.insert(25);
	s1.insert(20);
	s1.insert(30);
	s1.insert(33);
	s1.insert(5);
	s1.insert(20);
	cout << "s1: " << endl;
	output(s1);
	set<int> s2;
	s2.insert(10);
	s2.insert(13);
	s2.insert(11);
	s2.insert(19);
	s2.insert(17);
	s2.insert(21);
	cout << "s2 less is: " << endl;
	output(s2);
	set<int>::allocator_type s1_alloc;
	s1_alloc = s1.get_allocator();
	set<int> s3(less<int>(), s1_alloc);
	s3.insert(1);
	s3.insert(5);
	s3.insert(2);
	cout << "s3 less is: " << endl;
	output(s3);
	set<int> s4(s1);
	cout << "s4: " << endl;
	output(s4);
	multiset<int> sm1;
	sm1.insert(10);
	sm1.insert(15);
	sm1.insert(25);
	sm1.insert(20);
	sm1.insert(30);
	sm1.insert(33);
	sm1.insert(5);
	sm1.insert(20);
	cout << "sm1: " << endl;
	outputm(sm1);
	system("pause");
	return 0;
}