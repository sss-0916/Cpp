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

class Sum
{
private:
	long sum_d;
public:
	Sum() : sum_d(0){}
	void operator()(int ele)
	{
		sum_d += ele;
	}
	operator double()
	{
		return static_cast<double>(sum_d);
	}
};

int main()
{
	vector<int> myvector;
	fill_value(myvector, 1, 10);
	for_each(myvector.begin(), myvector.end(), print);
	cout << endl;
	double sum = for_each(myvector.begin(), myvector.end(), Sum());
	cout << "The sum: " << sum << endl;
	system("pause");
	return 0;
}