#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include "iostream"
using namespace std;

class Date
{
public:
	/*---有默认值的构造函数---*/
	Date(int year = 1900, int month = 1, int day = 1);

	/*---用一个对象来初始化另一个对象的构造函数---*/
	Date(const Date& d);

	/*---赋值操作符的重载---*/
	Date& operator=(const Date& d);

	/*---操作符+的重载---*/
	Date operator+(int days);

	/*---操作符-的重载---*/
	Date operator-(int days);

	/*---操作符-的重载---*/
	int operator-(const Date& d);

	/*---前置++的重载---*/
	Date& operator++();

	/*---后置++的重载---*/
	Date operator++(int);

	/*---前置--的重载---*/
	Date& operator--();

	/*---后置--的重载---*/
	Date operator--(int);

	/*---操作符>的重载---*/
	bool operator>(const Date& d) const;

	/*---操作符>=的重载---*/
	bool operator>=(const Date& d) const;

	/*---操作符<的重载---*/
	bool operator<(const Date& d) const;

	/*---操作符<=的重载---*/
	bool operator<=(const Date& d) const;

	/*---操作符==的重载---*/
	bool operator==(const Date& d) const;

	/*---操作符!=的重载---*/
	bool operator!=(const Date& d) const;

	/*---日期显示---*/
	void display() const;
private:
	int _year;
	int _month;
	int _day;
};