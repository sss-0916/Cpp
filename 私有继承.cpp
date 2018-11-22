/*
**	私有继承
*/

#define _CRT_SECURE_NO_WARNINGS

#include "iostream"
#include "string"
using namespace std;

/*---基类Student---*/
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

/*---派生类Student2---*/
class Student2 : private Student
{
public:
	void get_value_2();
	void display_2();
private:
	int age;
	string addr;
};

/*---输入函数---*/
void Student::get_value()
{
	cin >> num >> name >> sex;
}

/*---打印函数---*/
void Student::display()
{
	cout << "No." << num << endl;
	cout << "name: " << name << endl;
	cout << "sex: " << sex << endl;
}

/*派生类的输入函数---*/
void Student2::get_value_2()
{
	get_value();
	cin >> age >> addr;
}

/*---派生类的打印函数---*/
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