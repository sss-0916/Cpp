#include "iostream"
#include "vector"
#include "algorithm"
#include "functional"
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

bool abs_less(int ele1, int ele2)		//ʹ�þ���ֵ�Ƚ�
{
	return abs(ele1) < abs(ele2);
}

int main()
{
	vector<int> myvector;
	fill_value(myvector, -3, 12);
	for_each(myvector.begin(), myvector.end(), print);
	cout << endl;
	cout << "minimum: " << *min_element(myvector.begin(), myvector.end()) << endl;
	cout << "maximum: " << *max_element(myvector.begin(), myvector.end()) << endl;
	cout << "����ֵ��С��ֵΪ: " << *min_element(myvector.begin(), myvector.end(), abs_less) << endl;
	cout << "����ֵ����ֵΪ: " << *max_element(myvector.begin(), myvector.end(), abs_less) << endl;
	system("pause");
	return 0;
}