#include "iostream"
#include "deque"
#include "algorithm"
using namespace std;

void out(double& ele)
{
	cout.width(5);
	cout.precision(1);
	cout << std::fixed << ele << ", ";
}

int main()
{
	deque<double>::iterator iter;
	deque<double>::reverse_iterator riter;
	deque<double> d1, d2, d3;
	for (int i = 0; i < 10; i++)
	{
		d1.push_front(90 + i / 10.0);
	}
	cout << "All the element of deque d1: " << endl;
	for_each(d1.begin(), d1.end(), out);
	cout << endl;
	iter = d1.begin();
	double begin = *iter;
	iter = d1.end();
	double end = *(--iter);
	/////////////////
	riter = d1.rbegin();
	double rbegin = *riter;
	riter = d1.rend();
	double rend = *(--riter);
	double front = d1.front();
	double back = d1.back();
	cout << "begin: " << begin << ", " << "end: " << end << ", " << "front: " << front << ", " << "back: " << back << endl;
	cout << "reverse begin:" << rbegin << "reverse end: " << rend << ", " << endl;
	if (d1.empty())
	{
		cout << "双端序列为空. " << endl;
	}
	else
	{
		int size = d1.size();
		cout << "双端序列中包含" << size << "个元素. " << endl;
	}
	double five = d1.at(5);
	cout << "第5个元素为: " << five << endl;
	d2.assign(6, 0);
	d3.assign(d1.begin(), d1.end());
	cout << "all the element of 双端序列d2: " << endl;
	for_each(d2.begin(), d2.end(), out);
	cout << endl;
	cout << "all the element of 双端序列d3: " << endl;
	for_each(d3.begin(), d3.end(), out);
	cout << endl;
	system("pause");
	return 0;
}