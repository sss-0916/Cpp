#include "iostream"
#include "list"
#include "algorithm"
#include "string"
using namespace std;

template<class T> void print(const T& Ele)
{
	cout << " " << Ele << ";" << endl;
}

void Print_D(double& Ele)		//��ʽ�����
{
	cout.width(5);		//��ʽ����������5���ַ�
	cout.precision(1);		//����һλС����
	cout << std::fixed << Ele << ",";
}

void Print_I(int& Ele)
{
	cout << Ele << ",";
}

int main()
{
	list<string> mylist_string;
	list<double> mylist_double(6);
	// ����������list�����Ķ�����ʽ
	// ��ʼ��mylist_string
	mylist_string.push_front("1: Jack");
	mylist_string.push_front("2: Tom");
	mylist_string.push_front("3: Mike");
	// ��ʼ��mylist_double
	mylist_double.push_front(10.0);
	mylist_double.push_front(20.0);
	mylist_double.push_front(30.0);
	mylist_double.push_front(40.0);
	mylist_double.push_front(50.0);
	// ��������������������ʽ
	list<int> mylist_int(6, 0);
	list<double> mylist_double2(6, 0.0);
	list<int> elselist(mylist_int);
	list<double> Iterlist(mylist_double.begin(), mylist_double.end());
	// ������������е�Ԫ��
	cout << "the string list: mylist_string is below: " << endl;
	list<string>::iterator iter_String;
	for (iter_String = mylist_string.begin(); iter_String != mylist_string.end(); iter_String++)
	{
		string temp = *iter_String;
		print(temp);
	}
	cout << "the double list: mylist_double is below: " << endl;
	for_each(mylist_double.begin(), mylist_double.end(), Print_D);
	cout << endl;
	cout << "the double list: mylist_double2 is below: " << endl;
	for_each(mylist_double2.begin(), mylist_double2.end(), Print_D);
	cout << endl;
	cout << "the double list: Iteratorlist is below: " << endl;
	for_each(Iterlist.begin(), Iterlist.end(), Print_D);
	cout << endl;
	cout << "the int list: mylist_int is below: " << endl;
	for_each(mylist_int.begin(), mylist_int.end(), Print_I);
	cout << endl;
	cout << "the int list: elselist is below: " << endl;
	for_each(elselist.begin(), elselist.end(), Print_I);
	cout << endl;
	// ������������
	int size = mylist_string.size();
	int maxsize = mylist_string.max_size();//
	mylist_string.resize(5);
	size = mylist_double.size();
	maxsize = mylist_double.max_size();
	mylist_double.resize(5);
	size = mylist_double2.size();
	maxsize = mylist_double2.max_size();
	mylist_double2.resize(5);
	size = Iterlist.size();
	maxsize = Iterlist.max_size();
	Iterlist.resize(5);
	size = mylist_int.size();
	maxsize = mylist_int.max_size();
	mylist_int.resize(5);
	size = elselist.size();
	maxsize = elselist.max_size();
	elselist.resize(5);
	// �ٴ�������������е�Ԫ��
	cout << "the string list: mylist_string is below: " << endl;
	for (iter_String = mylist_string.begin(); iter_String != mylist_string.end(); iter_String++)
	{
		string temp = *iter_String;
		print(temp);
	}
	cout << "the double list: mylist_double is below: " << endl;
	for_each(mylist_double.begin(), mylist_double.end(), Print_D);
	cout << endl;
	cout << "the double list: mylist_double2 is below: " << endl;
	for_each(mylist_double2.begin(), mylist_double2.end(), Print_D);
	cout << endl;
	cout << "the double list: Iteratorlist is below: " << endl;
	for_each(Iterlist.begin(), Iterlist.end(), Print_D);
	cout << endl;
	cout << "the int list: mylist_int is below: " << endl;
	for_each(mylist_int.begin(), mylist_int.end(), Print_I);
	cout << endl;
	cout << "the int list: elselist is below: " << endl;
	for_each(elselist.begin(), elselist.end(), Print_I);
	cout << endl;
	// ʹ�õ�������صĺ���
	list<double>::iterator Iter_D;
	list<double>::reverse_iterator Iter_rD;
	double tmp = 0.0;
	Iter_D = mylist_double.begin();
	tmp = *Iter_D;
	cout << "The beginning element of the mylist_double: " << endl;
	cout << tmp << endl;
	Iter_rD = mylist_double.rbegin();
	tmp = *Iter_rD;
	cout << "The reverse beginning element of the mylist_double: " << endl;
	cout << tmp << endl;
	Iter_D = mylist_double.end();
	tmp = *Iter_D;
	cout << "The ending element of the mylist_double: " << endl;
	cout << cout.scientific << tmp << endl;
	Iter_rD = mylist_double.rend();
	tmp = *Iter_rD;
	cout << "The reverse ending element of the mylist_double: " << endl;
	cout << tmp << endl;
	tmp = mylist_double.front();
	cout << "The front element of the mylist_double: " << endl;
	cout << tmp << endl;
	tmp = mylist_double.back();
	cout << "The back element of the mylist_double: " << endl;
	cout << tmp << endl;
	system("pause");
	return 0;
}