/*
**	友元成员函数
*/

#define _CRT_SECURE_NO_WARNINGS

#include "iostream"
using namespace std;

/*---对Date类提前引用声明---*/
class Date;

class Time
{
public:
	Time(int, int, int);
	friend void display(Date& d, Time& t);
private:
	int hour;
	int minute;
	int sec;
};

class Date
{
public:
	Date(int, int, int);
	friend void display(Date& d, Time& t);
private:
	int year;
	int month;
	int day;
};

Time::Time(int h, int m, int s)
{
	hour = h;
	minute = m;
	sec = s;
}

Date::Date(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
}

void display(Date& d, Time& t)
{
	cout << "Date: " << d.year << ": " 
		 << d.month << ": " << d.day << endl;
	cout << "Time: " << t.hour << ": "
		 << t.minute << ": " << t.sec << endl;
}

int main()
{
	Time t1(13, 00, 00);
	Date d1(2018, 11, 19);
	display(d1, t1);
	system("pause");
	return 0;
}