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
	pos1 = find(myvector.begin(), myvector.end(), 5);
	vector<int>::iterator pos2;
	pos2 = find_if(myvector.begin(), myvector.end(), bind2nd(greater<int>(), 3));
	cout << "第一个等于5的元素的位置: " << distance(myvector.begin(), pos1) + 1 << endl;
	cout << "第一个大于3的元素的位置: " << distance(myvector.begin(), pos2) + 1 << endl;
	system("pause");
	return 0;
}