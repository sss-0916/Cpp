/*
**	建立学生类,联系引用的使用
*/

#define _CRT_SECURE_NO_WARNINGS

#include "iostream"
using namespace std;

class Student
{
public:
	Student(int n, double s) :num(n), score(s){}
	void change(int n, double s)
	{
		num = n;
		score = s;
	}
	void display()
	{
		cout << "No." << num << ": " << score << endl;
	}
private:
	int num;
	double score;
};

void fun(Student& stu)
{
	stu.change(1, 99.5);
	stu.display();
}

int main()
{
	Student stu1(1, 89.5);
	cout << "Before modification: " << endl;
	stu1.display();
	cout << "After modification: " << endl;
	fun(stu1);
	system("pause");
	return 0;
}