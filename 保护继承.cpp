/*
**	�����̳�
*/

#define _CRT_SECURE_NO_WARNINGS

#include "iostream"
#include "string"
using namespace std;

/*---����---*/
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

/*---������---*/
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

/*---���������뺯��---*/
void Student3::get_value_3()
{
	/*get_value();*/
	cin >> num >> name >> sex;
	cin >> age >> addr;
}

/*---�������ӡ����---*/
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