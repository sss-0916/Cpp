#include "iostream"
#include "string"
#include "vector"
using namespace std;

int main()
{
	vector<string> myvt;
	myvt.reserve(4);
	myvt.push_back("1. Beijing City.");
	myvt.push_back("2. Tianjin City.");
	myvt.push_back("3. Shanghai City.");
	myvt.push_back("4. Chongqing City.");
	cout << "OK!" << endl;
	vector<string>::iterator it;
	for (it = myvt.begin(); it != myvt.end(); it++)
	{
		cout << *it << endl;
	}
	int m = myvt.size();		//��ȡ�����Ĵ�С
	int n = myvt.capacity();		//��ȡ����������
	int m1 = myvt.max_size();		//��ȡ�������������
	cout << "vector:myvt, size is " << m << endl;
	cout << "vector:myvt, capacity is " << n << endl;
	cout << "vector:myvt, max_size is " << m1 << endl;
	myvt.resize(10);		//���ô�С
	cout << "resize: 10." << endl;
	int n1 = myvt.capacity();
	int n2 = myvt.size();
	cout << "vector:myvt, capacity is " << n1 << endl;
	cout << "vector:myvt, size is " << n2 << endl;
	for (it = myvt.begin(); it != myvt.end(); it++)
	{
		if (*it == "")
		{
			cout << "*****" << endl;
		}
		cout << *it << endl;
	}
	system("pause");
	return 0;
}