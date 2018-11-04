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

bool is_even(int ele)
{
	return ele % 2 == 0;
}

int main()
{
	vector<int> myvector;
	fill_value(myvector, 1, 10);
	for_each(myvector.begin(), myvector.end(), print);
	cout << endl;
	int ct = count(myvector.begin(), myvector.end(), 4);		//统计等于4的元素的个数
	int ctif = count_if(myvector.begin(), myvector.end(), is_even);		//统计偶数的个数
	int ctg = count_if(myvector.begin(), myvector.end(), bind2nd(greater<int>(), 2));		//统计大于2的元素的个数
	cout << "Number of the element equals to 4: " << ct << endl;
	cout << "偶数的个数: " << ctif << endl;
	cout << "大于等于2的元素的个数: " << ctg << endl;
	cout << endl;
	system("pause");
	return 0;
}