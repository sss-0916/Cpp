/*
**	保护继承
*/

#define _CRT_SECURE_NO_WARNINGS

#include "iostream"
#include "string"
using namespace std;

/*---基类---*/
class Student
{
public:
	void get_value();
	void display();
protected:
	int num;
	string name;
	char sex;
};

/*---派生类---*/
class Student3 : protected Student
//class Student3 : public Student
{
public: 
	void get_value_3();
	void display_3();
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

/*---派生类输入函数---*/
void Student3::get_value_3()
{
	/*get_value();*/
	cin >> num >> name >> sex;
	cin >> age >> addr;
}

/*---派生类打印函数---*/
void Student3::display_3()
{
	/*display();*/
	cout << "No." << num << endl;
	cout << "name: " << name << endl;
	cout << "sex: " << sex << endl;
	cout << "age: " << age << endl;
	cout << "addr: " << addr << endl;
}

int main()
{
	Student3 stu3;
	stu3.get_value_3();
	stu3.display_3();
	system("pause");
	return 0;
}