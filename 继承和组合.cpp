/*
**	继承和组合
*/

#define _CRT_SECURE_NO_WARNINGS

#include "iostream"
#include "string"
using namespace std;

/*---教师类---*/
class Teacher
{
public:
	Teacher(int, string, char);
	void teacher_display();
private:
	int num;
	string name;
	char sex;
};

/*---出生日期类---*/
class BirthDate
{
public:
	BirthDate(int, int, int);
	void birth_date_display();
private:
	int year;
	int month;
	int day;
};

/*---教授类---*/
class Professor : public Teacher
{
public:
	Professor(int, string, char, BirthDate&);
	void professor_display();
private:
	BirthDate birthday;
};

/*---教师类构造函数---*/
Teacher::Teacher(int n, string nam, char s)
{
	num = n;
	name = nam;
	sex = s;
}

/*---教师类打印函数---*/
void Teacher::teacher_display()
{
	cout << "No." << num << endl;
	cout << "name: " << name << endl;
	cout << "sex: " << sex << endl;
}

/*---生日类构造函数---*/
BirthDate::BirthDate(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
}

/*---生日类打印函数---*/
void BirthDate::birth_date_display()
{
	cout << "birthday: " << year
		 << " - " << month
		 << " - " << day 
		 << endl;
}

/*---教授类构造函数---*/
Professor::Professor(int n, string nam, char s, BirthDate& bir) :
Teacher(n, nam, s), birthday(bir){}

/*---教授类打印函数---*/
void Professor::professor_display()
{
	teacher_display();
	birthday.birth_date_display();
}

int main()
{
	BirthDate b(1995, 9, 16);
	Professor p(1, "呵呵", 'f', b);
	p.professor_display();
	system("pause");
	return 0;
}