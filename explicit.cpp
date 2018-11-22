/*
**	explicitµÄÊ¹ÓÃ
*/

#define _CRT_SECURE_NO_WARNINGS

#include "iostream"
using namespace std;

class Date
{
public:
	Date(int y) : year(y){}
	explicit Date(int y) : year(y){}

private:
	int year;
	int month;
	int day;
};

void test_date()
{
	Date d(2018);
	d = 2019;
}

int main()
{
	test_date();
	system("pause");
	return 0;
}