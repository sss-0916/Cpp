#include "iostream"
#include "list"
#include "ctime"
using namespace std;

void mysleep(int second)
{
	clock_t st;
	st = clock();
	while (clock() - st < second * CLOCKS_PER_SEC);
}

int main()
{
	int count = 5;
	int number = 0;
	list<int> mylist;		//��listģ�����ʵ����,list<int>
	cout << "�����������������: " << endl;
	while (count--)
	{
		cin >> number;
		mylist.push_back(number);		//����������ѹ���б�
	}
	list<int>::iterator iter;
	for (iter = mylist.begin(); iter != mylist.end(); iter++)
	{
		cout << *iter << " ,";		//����б�list��Ԫ��
	}
	cout << endl;
	system("pause");
	return 0;
}