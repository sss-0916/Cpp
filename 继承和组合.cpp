/*
**	�̳к����
*/

#define _CRT_SECURE_NO_WARNINGS

#include "iostream"
#include "string"
using namespace std;

/*---��ʦ��---*/
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

/*---����������---*/
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

/*---������---*/
class Professor : public Teacher
{
public:
	Professor(int, string, char, BirthDate&);
	void professor_display();
private:
	BirthDate birthday;
};

/*---��ʦ�๹�캯��---*/
Teacher::Teacher(int n, string nam, char s)
{
	num = n;
	name = nam;
	sex = s;
}

/*---��ʦ���ӡ����---*/
void Teacher::teacher_display()
{
	cout << "No." << num << endl;
	cout << "name: " << name << endl;
	cout << "sex: " << sex << endl;
}

/*---�����๹�캯��---*/
BirthDate::BirthDate(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
}

/*---�������ӡ����---*/
void BirthDate::birth_date_display()
{
	cout << "birthday: " << year
		 << " - " << month
		 << " - " << day 
		 << endl;
}

/*---�����๹�캯��---*/
Professor::Professor(int n, string nam, char s, BirthDate& bir) :
Teacher(n, nam, s), birthday(bir){}

/*---�������ӡ����---*/
void Professor::professor_display()
{
	teacher_display();
	birthday.birth_date_display();
}

int main()
{
	BirthDate b(1995, 9, 16);
	Professor p(1, "�Ǻ�", 'f', b);
	p.professor_display();
	system("pause");
	return 0;
}