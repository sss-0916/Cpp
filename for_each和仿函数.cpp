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
		cout << "The indexes is error. " << endl;
	}
}

void print(int ele)
{
	cout << ele << " ";
}

template <class T>
class Multiple
{
private:
	T thevalue;
public:
	Multiple(const T& v) :thevalue(v){}
	void operator()(T& ele) const
	{
		ele *= thevalue;
	}
};

int main()
{
	vector<int> myvector;
	fill_value(myvector, 1, 10);
	for_each(myvector.begin(), myvector.end(), print);
	cout << endl;
	for_each(myvector.begin(), myvector.end(), Multiple<int>(2));
	for_each(myvector.begin(), myvector.end(), print);
	cout << endl;
	system("pause");
	return 0;
}