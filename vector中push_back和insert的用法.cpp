#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

void OutToScreen(int& Ele)		//���Ԫ��
{
	cout << Ele << ", ";
}

int main()
{
	vector<int> myvt;
	for (int i = 0; i < 10; i++)
	{
		myvt.push_back(i);		//��ʼ�������е�Ԫ��
	}
	myvt.insert(myvt.begin(), -1);		//��������ʼλ�ò���-1
	for_each(myvt.begin(), myvt.end(), OutToScreen);
	cout << endl;
	myvt.insert(myvt.end(), -2);		//������ĩβ֮ǰ����-2
	for_each(myvt.begin(), myvt.end(), OutToScreen);
	cout << endl;
	vector<int> vt2;		//�����µ���ֵ����
	vt2.push_back(-8);
	vt2.push_back(-9);
	myvt.insert(myvt.end(), vt2.begin(), vt2.end());		//��������ֵ
	for_each(myvt.begin(), myvt.end(), OutToScreen);
	cout << endl;
	myvt.insert(myvt.begin(), 3, 0);		//��������ͬ��ֵ
	for_each(myvt.begin(), myvt.end(), OutToScreen);
	cout << endl;
	system("pause");
	return 0;
}