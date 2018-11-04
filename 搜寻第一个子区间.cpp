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

bool check_even(int ele, bool even)
{
	if (even)
	{
		return ele % 2 == 0;
	}
	else
	{
		return ele % 2 == 1;
	}
}

int main()
{
	vector<int> myvector;
	vector<int> subvector;
	bool check_even_arg[3] = { true, false, true };
	fill_value(myvector, -3, 12);
	fill_value(subvector, -1, 3);
	for_each(myvector.begin(), myvector.end(), print);
	cout << endl;
	for_each(subvector.begin(), subvector.end(), print);
	cout << endl;
	vector<int>::iterator pos1;
	pos1 = search(myvector.begin(), myvector.end(), subvector.begin(), subvector.end());
	if (pos1 != myvector.end())
	{
		cout << "�Ӵ���ԭ���е�λ��: " << distance(myvector.begin(), pos1) + 1 << endl;
	}
	else
	{
		cout << "û����������Ҫ���Ӵ���" << endl;
	}
	vector<int>::iterator pos2;
	pos2 = search(myvector.begin(), myvector.end(), check_even_arg, check_even_arg + 3, check_even);
	cout << "���㡮ż���棬ż��˳����Ӵ�����ʼλ��: " << distance(myvector.begin(), pos2) + 1 << endl;
	system("pause");
	return 0;
}