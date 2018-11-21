/*
**	成员函数的缺省和重载
*/

#define _CRT_SECURE_NO_WARNINGS

#include "iostream"
using namespace std;

class Date
{
public:
	/*---函数缺省---*/
	Date(int year = 1994, int month = 9, int day = 16);
	/*---构造函数重载---*/
	/*Date(int, int);
	Date(int);
	Date();*/
	void display();
private:
	int year;
	int month;
	int day;
};

Date::Date(int _year, int _month, int _day)
{
	year = _year;
	month = _month;
	day = _day;
}

//Date::Date(int _year, int _month)
//{
//	year = _year;
//	month = _month;
//	day = 11;
//}
//
//Date::Date(int _year)
//{
//	year = _year;
//	month = 11;
//	day = 11;
//}
//
//Date::Date()
//{
//	year = 2005;
//	month = 11;
//	day = 11;
//}

void Date::display()
{
	cout << year << "-" << month 
		  << "-" << day << endl;
}

int main()
{
	Date d1;
	d1.display();
	Date d2(2018);
	d2.display();
	Date d3(2017, 8);
	d3.display();
	Date d4(2016, 7, 7);
	d4.display();
	system("pause");
	return 0;
}