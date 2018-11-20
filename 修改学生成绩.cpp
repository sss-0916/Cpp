/*
**	学生成绩的修改const和mutable的使用
*/

#define _CRT_SECURE_NO_WARNINGS

#include "iostream"
using namespace std;

class Student
{
public:
	Student(int n, double s) :num(n), score(s){}
	void change(int n, double s) const
	{
		num = n;
		score = s;
	}
	void display() const
	{
		cout << "No." << num << ": " << score << endl;
	}
private:
	mutable int num;
	mutable double score;
};

int main()
{
	const Student stu(101, 78.5);
	//Student stu(101, 78.5);
	//const Student* stu_ptr = &stu;
	/*---不能用常对象的指针来初始化指向对象的常指针---*/
	//Student* const stu_ptr = &stu;
	const Student* stu_ptr = &stu;
	stu_ptr -> display();
	stu_ptr -> change(101, 80.5);
	stu_ptr -> display();
	system("pause");
	return 0;
}