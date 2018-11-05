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
	pos1 = find_end(myvector.begin(), myvector.end(), subvector.begin(), subvector.end());
	if (pos1 != myvector.end())
	{
		cout << "最后一个子串在原串中的位置: " << distance(myvector.begin(), pos1) + 1 << endl;
	}
	else
	{
		cout << "没有找到需要的字符串. " << endl;
	}
	system("pause");
	return 0;
}