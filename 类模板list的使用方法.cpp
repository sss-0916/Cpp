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
	list<int> mylist;		//对list模板进行实例化,list<int>
	cout << "请输入任意五个数字: " << endl;
	while (count--)
	{
		cin >> number;
		mylist.push_back(number);		//将输入数据压入列表
	}
	list<int>::iterator iter;
	for (iter = mylist.begin(); iter != mylist.end(); iter++)
	{
		cout << *iter << " ,";		//输出列表list的元素
	}
	cout << endl;
	system("pause");
	return 0;
}