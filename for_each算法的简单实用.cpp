#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

template<class T>
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
		cout << "The indexes is error: last < first. " << endl;
	}
}

void print(int ele)
{
	cout << ele << " ";
}

int main()
{
	vector<int> myvector;
	fill_value(myvector, 1, 10);
	for_each(myvector.begin(), myvector.end(), print);
	cout << endl;
	system("pause");
	return 0;
}