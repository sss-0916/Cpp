#include "functional"
#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

template <class T>
void fill_value(T& vect, int first, int last)
{
	if (last >= first)
	{
		for (int i = first; i <= last; i++)
		{
			vect.insert(vect.end(), i);
		}
	}
	else
	{
		cout << "The index is error. " << endl;
	}
}

void print(int ele)
{
	cout << ele << " ";
}

int main()
{
	vector<int> myvector;
	fill_value(myvector, -3, 12);
	for_each(myvector.begin(), myvector.end(), print);
	cout << endl;
	vector<int>::iterator pos1;
	pos1 = search_n(myvector.begin(), myvector.end(), 4, 3);
	if (pos1 != myvector.end())
	{
		cout << "4个连续等于3的元素的起始位置: " << distance(myvector.begin(), pos1) + 1 << endl;
	}
	else
	{
		cout << "没有4个连续等于3的元素." << endl;
	}
	vector<int>::iterator pos2;
	pos2 = search_n(myvector.begin(), myvector.end(), 4, 3, greater<int>());
	if (pos2 != myvector.end())
	{
		cout << "4个连续大于3的元素的起始位置: " << distance(myvector.begin(), pos2) + 1 << endl;
	}
	else
	{
		cout << "没有4个连续大于3的元素." << endl;
	}
	system("pause");
	return 0;
}