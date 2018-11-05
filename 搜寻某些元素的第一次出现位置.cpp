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
	vector<int> subvector;
	fill_value(myvector, -3, 12);
	fill_value(myvector, -3, 6);
	fill_value(subvector, -1, 3);
	cout << "myvector: " << endl;
	for_each(myvector.begin(), myvector.end(), print);
	cout << endl;
	cout << "subvector: " << endl;
	for_each(subvector.begin(), subvector.end(), print);
	cout << endl;
	vector<int>::iterator pos1;
	pos1 = find_first_of(myvector.begin(), myvector.end(), subvector.begin(), subvector.end());
	if (pos1 != myvector.end())
	{
		cout << "第一个子串的位置为: " << distance(myvector.begin(), pos1) + 1 << endl;
	}
	else
	{
		cout << "没有搜索到需要的子串. " << endl;
	}
	vector<int>::reverse_iterator rpos;
	rpos = find_first_of(myvector.rbegin(), myvector.rend(), subvector.rbegin(), subvector.rend());
	cout << "原串中最后一个子串的位置: " << distance(myvector.begin(), rpos.base()) << endl;
	system("pause");
	return 0;
}