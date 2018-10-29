#include "iostream"
#include "list"
using namespace std;

struct PERSON
{
	int id;
	int sex;
	double core;
	void clear()
	{
		id = 0;
		sex = 0;
		core = 0;
	}
};

int main()
{
	PERSON temp;
	list<PERSON>C1;		//声明一个list容器的对象C1,容器中的元素是PERSON类型的对象
	int id_temp;
	int sex_temp;
	double core_temp;
	int size = 0;
	C1.clear();
	int counter = 0;
	cout << "This is a simplest C++ Example!\n " << endl;
	cout << "任意键开始...";
	cin.get();		//按回车键等待
	while (counter < 5)
	{
		cout << "请输入ID: ";
		cin >> id_temp;
		cout << "请输入性别: ";
		cin >> sex_temp;
		cout << "请输入分数: ";
		cin >> core_temp;
		temp.id = id_temp;
		temp.sex = sex_temp;
		temp.core = core_temp;
		C1.push_back(temp);
		memset(&temp, 0, sizeof(PERSON));
		counter++;
	}
	cout << "回车键继续:... ";
	cin.get();
	size = C1.size();
	cout << endl;
	list<PERSON>::iterator Iter;
	for (Iter = C1.begin(); Iter != C1.end(); Iter++)
	{
		temp.clear();
		temp = *Iter;
		cout << "ID: " << temp.id << ", SEX: " << temp.sex << ",Core: " << temp.core << endl;
	}
	cout << "按任意键结束...";
	cin.get();
	return 0;
}