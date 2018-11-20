#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include "iostream"
using namespace std;

class Point
{
public:
	/*---��Ĭ�ϲ����Ĺ��캯��---*/
	Point(double x = 0, double y = 0);
	void set_point(double, double);
	double get_x() const { return x; }
	double get_y() const { return y; }
	friend ostream& operator<<(ostream&, const Point&);
protected:
	double x;
	double y;
};