#include "iostream"
#include "deque"
#include "algorithm"
using namespace std;

void print(int& ele)
{
	cout << ele << ", ";
}

int main()
{
	deque<int> d1;
	d1.push_front(0);
	d1.push_front(1);
	d1.push_front(2);
	d1.push_front(3);
	d1.push_front(4);
	d1.push_back(1);
	d1.push_back(2);
	d1.push_back(3);
	d1.push_back(4);
	cout << "d1: " << endl;
	for_each(d1.begin(), d1.end(), print);
	cout << endl;
	d1[4] = 9;
	cout << "d1: " << endl;
	for_each(d1.begin(), d1.end(), print);
	cout << endl;
	system("pause");
	return 0;
}