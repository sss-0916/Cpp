/*
**	友元类
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
	void display(Date&);
private:
	int hour;
	int minute;
	int sec;
};

class Date
{
public:
	Date(int, int, int);
	friend Time;
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

void Time::display(Date& d)
{
	cout << "Date: " << d.year << ": " <<
		d.month << ": " << d.day << endl;
	cout << "Time: " << hour << ": " <<
		minute << ": " << sec << endl;
}

Date::Date(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
}

int main()
{
	Time t1(13, 40, 20);
	Date d1(2018, 11, 19);
	t1.display(d1);
	system("pause");
	return 0;
}