/*
**	将一个学生类对象转化为教师类对象
*/

#define _CRT_SECURE_NO_WARNINGS

#include "iostream"
using namespace std;

class Teacher;

class Student
{
public:
	friend Teacher;
	Student(int, char*, char);
	void display();
private:
	int num;
	char name[50];
	char sex;
};

class Teacher
{
public:
	Teacher(Student&);
	void display();
private:
	int num;
	char name[50];
	char sex;
};

Student::Student(int n, char* nam, char s)
{
	num = n;
	strcpy(name, nam);
	sex = s;
}

void Student::display()
{
	cout << "No." << num << ": " << name << " " << sex << endl;
}

Teacher::Teacher(Student& s)
{
	num = s.num;
	strcpy(name, s.name);
	sex = s.sex;
}

void Teacher::display()
{
	cout << "No." << num << ": " << name << " " << sex << endl;
}

int main()
{
	Student stu(1, "LingChen", 'f');
	cout << "Student: " << endl;
	stu.display();
	Teacher te(stu);
	cout << "Teacher: " << endl;
	te.display();
	system("pause");
	return 0;
}