/*
**	���ü̳�
*/

#define _CRT_SECURE_NO_WARNINGS

#include "iostream"
#include "string"
using namespace std;

/*---ѧ����---*/
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

/*---ѧ����1���ü̳�ѧ����---*/
class Student1 : public Student
{
public:
	void get_value_1();
	void display_1();
private:
	int age;
	string addr;
};

/*---ѧ������������ݺ���---*/
void Student::get_value()
{
	cin >> num >> name >> sex;
}

/*---ѧ����Ĵ�ӡ����---*/
void Student::display()
{
	cout << "No." << num << endl;
	cout << "name:" << name << endl;
	cout << "sex: " << sex << endl;
}

/*---ѧ����1���������ݺ���---*/
void Student1::get_value_1()
{
	cin >> age >> addr;
}

/*---ѧ����1�Ĵ�ӡ����---*/
void Student1::display_1()
{
	cout << "age: " << age << endl;
	cout << "addr: " << addr << endl;
}

int main()
{
	Student1 stu1;
	/*---��������---*/
	stu1.get_value();
	stu1.get_value_1();
	/*---���ݴ�ӡ---*/
	stu1.display();
	stu1.display_1();
	system("pause");
	return 0;
}