#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include "iostream"
using namespace std;

class Date
{
public:
	/*---��Ĭ��ֵ�Ĺ��캯��---*/
	Date(int year = 1900, int month = 1, int day = 1);

	/*---��һ����������ʼ����һ������Ĺ��캯��---*/
	Date(const Date& d);

	/*---��ֵ������������---*/
	Date& operator=(const Date& d);

	/*---������+������---*/
	Date operator+(int days);

	/*---������-������---*/
	Date operator-(int days);

	/*---������-������---*/
	int operator-(const Date& d);

	/*---ǰ��++������---*/
	Date& operator++();

	/*---����++������---*/
	Date operator++(int);

	/*---ǰ��--������---*/
	Date& operator--();

	/*---����--������---*/
	Date operator--(int);

	/*---������>������---*/
	bool operator>(const Date& d) const;

	/*---������>=������---*/
	bool operator>=(const Date& d) const;

	/*---������<������---*/
	bool operator<(const Date& d) const;

	/*---������<=������---*/
	bool operator<=(const Date& d) const;

	/*---������==������---*/
	bool operator==(const Date& d) const;

	/*---������!=������---*/
	bool operator!=(const Date& d) const;

	/*---������ʾ---*/
	void display() const;
private:
	int _year;
	int _month;
	int _day;
};