/*
**	˽�м̳�
*/

#define _CRT_SECURE_NO_WARNINGS

#include "iostream"
#include "string"
using namespace std;

/*---����Student---*/
class Student
{
public:
	void get_value();
	void display();
private:
	int num;
	string name;
	char sex;
};

/*---������Student2---*/
class Student2 : private Student
{
public:
	void get_value_2();
	void display_2();
private:
	int age;
	string addr;
};

/*---���뺯��---*/
void Student::get_value()
{
	cin >> num >> name >> sex;
}

/*---��ӡ����---*/
void Student::display()
{
	cout << "No." << num << endl;
	cout << "name: " << name << endl;
	cout << "sex: " << sex << endl;
}

/*����������뺯��---*/
void Student2::get_value_2()
{
	get_value();
	cin >> age >> addr;
}

/*---������Ĵ�ӡ����---*/
void Student2::display_2()
{
	display();
	cout << "age: " << age << endl;
	cout << "addr: " << addr << endl;
}

int main()
{
	Student2 stu2;
	stu2.get_value_2();
	stu2.display_2();
	system("pause");
	return 0;
}