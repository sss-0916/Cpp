/*
**	����������������Ϊ��Ա����
*/

#define _CRT_SECURE_NO_WARNINGS

#include "iostream"
using namespace std;

class Date
{
public:
	Date(int, int, int);
	ostream& operator<<(ostream&);
private:
	int year;
	int month;
	int day;
};

Date::Date(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
}

ostream& Date::operator<<(ostream& output)
{
	output << year << " - " << month << " - " << day << endl;
	return output;
}

int main()
{
	Date d1(2018, 11, 19);
	/*---�����齫��������������Ϊ��Ա����---*/
	d1.operator<<(cout);
	system("pause");
	return 0;
}