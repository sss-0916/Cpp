#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

void OutToScreen(int& Ele)
{
	cout << Ele << ", ";
}

int main()
{
	vector<int> myvt;
	for (int i = 0; i < 10; i++)
	{
		myvt.push_back(i);
	}
	for_each(myvt.begin(), myvt.end(), OutToScreen);		//输出vector中的元素
	cout << endl;
	cout << "----------------------------" << endl;
	while (!myvt.empty())		//判断向量是否为空
	{
		myvt.pop_back();		//弹出向量
		for_each(myvt.begin(), myvt.end(), OutToScreen);		//输出向量中的元素
		cout << endl;
	}
	myvt.clear();
	for (int j = 0; j < 10; j++)
	{
		myvt.push_back(j);
	}
	for_each(myvt.begin(), myvt.end(), OutToScreen);
	cout << endl;
	cout << "----------------------------" << endl;
	while (!myvt.empty())		//判断向量是否为空
	{
		myvt.erase(myvt.begin());		//删除开始的第一个元素
		for_each(myvt.begin(), myvt.end(), OutToScreen);
		cout << endl;
	}
	system("pause");
	return 0;
}