#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

void OutToScreen(int& Ele)		//输出元素
{
	cout << Ele << ", ";
}

int main()
{
	vector<int> myvt;
	for (int i = 0; i < 10; i++)
	{
		myvt.push_back(i);		//初始化容器中的元素
	}
	myvt.insert(myvt.begin(), -1);		//向容器起始位置插入-1
	for_each(myvt.begin(), myvt.end(), OutToScreen);
	cout << endl;
	myvt.insert(myvt.end(), -2);		//向向量末尾之前插入-2
	for_each(myvt.begin(), myvt.end(), OutToScreen);
	cout << endl;
	vector<int> vt2;		//定义新的数值序列
	vt2.push_back(-8);
	vt2.push_back(-9);
	myvt.insert(myvt.end(), vt2.begin(), vt2.end());		//插入多个数值
	for_each(myvt.begin(), myvt.end(), OutToScreen);
	cout << endl;
	myvt.insert(myvt.begin(), 3, 0);		//插入多个相同的值
	for_each(myvt.begin(), myvt.end(), OutToScreen);
	cout << endl;
	system("pause");
	return 0;
}