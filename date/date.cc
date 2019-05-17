#include "date.h"

bool Date::operator>(const Date& d) const{
	if(_year > d._year ||
	  (_year == d._year && _month > d._month) ||
	  (_year == d._year && _month == d._month && _day > d._day)){
		return true;
	}
	return false;
}

bool Date::operator>=(const Date& d) const{
	return (*this) > d || (*this) == d;
}

bool Date::operator<(const Date& d) const{
	return !((*this) >= d);
}

bool Date::operator<=(const Date& d) const{
	return (*this) < d || (*this) == d;
}

bool Date::operator==(const Date& d) const{
	return _year == d._year && 
		   _month == d._month &&
		   _day == d._day;
}

bool Date::operator!=(const Date& d) const{
	return !((*this) == d);
}

Date& Date::operator+=(int day){
	if(day < 0){
		return *this -= -day;
	}

	_day += day;

	while(_day > getMonthDay(_year, _month)){

		_day -= getMonthDay(_year, _month);
		++_month;

		if(_month == 13){
			_month = 1;
			++_year;
		}
	}

	return *this;
}

Date& Date::operator-=(int day){
	if(day < 0){
		return *this += -day;
	}

	_day -= day;
	while(_day <= 0){
		--_month;
		if(_month == 0){
			_month = 12;
			--_year;
		}
		_day += getMonthDay(_year, _month);
	}

	return *this;
}

Date& Date::operator++(){
	*this += 1;
	return *this;
}

Date Date::operator++(int){
	Date ret = *this;
	*this += 1;
	return ret;
}

Date& Date::operator--(){
	*this -= 1;
	return *this;
}

Date Date::operator--(int){
	Date ret = *this;
	*this -= 1;
	return ret;
}

Date Date::operator+(int day) const{
	Date ret = *this;
	ret += day;
	return ret;
}

Date Date::operator-(int day) const{
	Date ret = *this;
	ret -= day;
	return ret;
}

int Date::operator-(const Date& d){
	int cnt = 0;
	Date max = *this;
	Date min = d;

	if(max < min){
		max = d;
		min = *this;
	}

	while(min != max){
		++min;
		++cnt;
	}

	return cnt;
}
