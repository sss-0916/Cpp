/*
**	建立一个对象数组,内放五个学生的信息,用指针来访问
*/

#define _CRT_SECURE_NO_WARNINGS

#include "iostream"
using namespace std;

class Student
{
public:
	Student(){}
	Student(int n, double s) :num(n), score(s){}
	friend Student score_max(Student* stu_ptr);
	void display()
	{
		cout << "No." << num << ": " << score << endl;
	}
private:
	int num;
	double score;
};

Student score_max(Student* stu_ptr)
{
	Student temp;
	for (int i = 0; i < 5; ++i)
	{
		if ((stu_ptr + i) -> score > temp.score)
		{
			temp.score = (stu_ptr + i) -> score;
			temp.num = i + 1;
		}
	}
	return temp;
}

int main()
{
	Student stu1(1, 93), stu2(2, 89), stu3(3, 61), stu4(4, 55), stu5(5, 100);
	Student stu[5] = { stu1, stu2, stu3, stu4, stu5 };
	Student* stu_ptr = stu;
	stu_ptr->display();
	(stu_ptr + 1)->display();
	(stu_ptr + 2)->display();
	(stu_ptr + 3)->display();
	(stu_ptr + 4)->display();
	Student max_stu = score_max(stu_ptr);
	cout << endl << "The max score's num is: " << endl;
	max_stu.display();
	system("pause");
	return 0;
}