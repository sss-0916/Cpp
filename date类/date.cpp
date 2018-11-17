#include "date.h"

/*---���캯��������---*/
Date::Date(int year, int month, int day)
{
	_year = year;
	_month = month;
	_day = day;
}

/*---���캯��������---*/
Date::Date(const Date& d)
{
	_year = d._year;
	_month = d._month;
	_day = d._day;
}

/*---��ֵ�����������---*/
Date& Date::operator=(const Date& d)
{
	_year = d._year;
	_month = d._month;
	_day = d._day;
	return *this;
}

/*---�����+������---*/
Date Date::operator+(int days)
{
	Date temp(*this);
	int temp_month = days / 30;
	int temp_day = days % 30;
	temp._day += temp_day;
	temp._month += temp_month;
	if (temp._day > 30)
	{
		temp._day -= 30;
		temp._month += 1;
	}
	if (temp._month > 12)
	{
		temp._month -= 12;
		temp._year += 1;
	}
	return temp;
}

/*---�����-������---*/
Date Date::operator-(int days)
{
	Date temp(*this);
	int temp_day = 0;
	int temp_month = 0;
	temp_day = days % 30;
	temp_month = days / 30;
	temp._day -= temp_day;
	temp._month -= temp_month;
	if (temp._day <= 0)
	{
		temp._day += 30;
		temp._month -= 1;
	}
	if (temp._month <= 0)
	{
		temp._month += 12;
		temp._year -= 1;
	}
	return temp;
}

/*---�����-������---*/
int Date::operator-(const Date& d)
{
	int temp_year = 0;
	int temp_month = 0;
	int temp_day = 0;
	temp_year = d._year - _year;
	temp_month = d._month - _month;
	temp_day = d._day - _day;
	return temp_year * 365 + temp_month * 30 + temp_day;
}

/*---ǰ��++������---*/
Date& Date::operator++()
{
	_day += 1;
	if (_day > 30)
	{
		_day -= 30;
		_month += 1;
	}
	if (_month > 12)
	{
		_month -= 12;
		_year += 1;
	}
	return *this;
}

/*---����++������---*/
Date Date::operator++(int)
{
	Date temp(*this);
	_day += 1;
	if (_day > 30)
	{
		_day -= 30;
		_month += 1;
	}
	if (_month > 12)
	{
		_month -= 12;
		_year += 1;
	}
	return temp;
}

/*---ǰ��--������---*/
Date& Date::operator--()
{
	_day -= 1;
	if (_day <= 0)
	{
		_day += 30;
		_month -= 1;
	}
	if (_month <= 0)
	{
		_month += 12;
		_year -= 1;
	}
	return *this;
}

/*---����--������---*/
Date Date::operator--(int)
{
	Date temp(*this);
	_day -= 1;
	if (_day <= 0)
	{
		_day += 30;
		_month -= 1;
	}
	if (_month <= 0)
	{
		_month += 12;
		_year -= 1;
	}
	return temp;
}

/*---�����>������---*/
bool Date::operator>(const Date& d) const
{
	/*--->����1,<=����0---*/
	if (_year > d._year)
	{
		return 1;
	}
	if (_year == d._year && _month > d._month)
	{
		return 1;
	}
	if (_year == d._year && _month == d._month && _day > d._day)
	{
		return 1;
	}
	return 0;
}

/*---�����>=������---*/
bool Date::operator>=(const Date& d) const
{
	/*--->=����1,<����0---*/
	if (_year >= d._year)
	{
		return 1;
	}
	if (_year == d._year && _month >= d._month)
	{
		return 1;
	}
	if (_year == d._year && _month == d._month && _day >= d._day)
	{
		return 1;
	}
	return 0;
}

/*---�����<������---*/
bool Date::operator<(const Date& d) const
{
	/*---<����1,>=����0---*/
	if (_year < d._year)
	{
		return 1;
	}
	if (_year == d._year && _month < d._month)
	{
		return 1;
	}
	if (_year == d._year && _month == d._month && _day < d._day)
	{
		return 1;
	}
	return 0;
}

/*---�����<=������---*/
bool Date::operator<=(const Date& d) const
{
	/*---<=����1,>����0---*/
	if (_year <= d._year)
	{
		return 1;
	}
	if (_year == d._year && _month <= d._month)
	{
		return 1;
	}
	if (_year == d._year && _month == d._month && _day <= d._day)
	{
		return 1;
	}
	return 0;
}

/*---�����==������---*/
bool Date::operator==(const Date& d) const
{
	/*---��ȷ���1,���ȷ���0---*/
	if (_year == d._year && _month == d._month && _day == d._day)
	{
		return 1;
	}
	return 0;
}

/*---�����!=������---*/
bool Date::operator!=(const Date& d) const
{
	/*---���ȷ���1,��ȷ���0---*/
	if (_year != d._year || _month != d._month || _day != d._day)
	{
		return 1;
	}
	return 0;
}

void Date::display() const
{
	cout << _year << "-" << _month << "-" << _day << endl;
}