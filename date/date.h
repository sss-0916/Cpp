#pragma once

#include <iostream>
using std::cout;
using std::endl;

class Date{
	public:
		Date(int year = 1900, int month = 1, int day = 1){
			if(year >= 1900 && 
			   (month > 0 && month < 13) &&
			   (day > 0 && day < getMonthDay(year, month))){
				_year = year;
				_month = month;
				_day = day;
			}
			else{
				cout << "Invalid Date!" << endl;
			}
		}

		void Display(){
			cout << _year << "-" << _month << "-" << _day << endl;
		}

		bool operator>(const Date& d) const;

		bool operator>=(const Date& d) const;

		bool operator<(const Date& d) const;

		bool operator<=(const Date& d) const;

		bool operator==(const Date& d) const;

		bool operator!=(const Date& d) const;

		Date& operator+=(int day);

		Date& operator-=(int day);

		Date& operator++();

		Date operator++(int);

		Date& operator--();

		Date operator--(int);

		Date operator+(int day) const;

		Date operator-(int day) const;

		int operator-(const Date& d);

	private:
		bool isLeapYear(int year) const{
			return (year % 4 == 0 && year % 100 != 0) ||
				(year % 400 == 0);
		}

		int getMonthDay(int year, int month) const{
			static int Month[13] = {
				0, 31, 28, 31, 30, 31, 30, 
				31, 31, 30, 31, 30, 31
			};

			if(month == 2 && isLeapYear(year)){
				return 29;
			}

			return Month[month];
		}
	private:
		int _year;
		int _month;
		int _day;
};
