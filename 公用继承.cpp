/*
**	公用继承
*/

#define _CRT_SECURE_NO_WARNINGS

#include "iostream"
#include "string"
using namespace std;

/*---学生类---*/
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

/*---学生类1公用继承学生类---*/
class Student1 : public Student
{
public:
	void get_value_1();
	void display_1();
private:
	int age;
	string addr;
};

/*---学生类的输入数据函数---*/
void Student::get_value()
{
	cin >> num >> name >> sex;
}

/*---学生类的打印函数---*/
void Student::display()
{
	cout << "No." << num << endl;
	cout << "name:" << name << endl;
	cout << "sex: " << sex << endl;
}

/*---学生类1的输入数据函数---*/
void Student1::get_value_1()
{
	cin >> age >> addr;
}

/*---学生类1的打印函数---*/
void Student1::display_1()
{
	cout << "age: " << age << endl;
	cout << "addr: " << addr << endl;
}

int main()
{
	Student1 stu1;
	/*---数据输入---*/
	stu1.get_value();
	stu1.get_value_1();
	/*---数据打印---*/
	stu1.display();
	stu1.display_1();
	system("pause");
	return 0;
}