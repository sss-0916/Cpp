#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include "iostream"
#include "point.h"
using namespace std;

class Circle : public Point
{
public:
	/*---构造函数---*/
	Circle(double x = 0, double y = 0, double r = 0);
	void set_radius(double);
	/*---读取半径值---*/
	double get_radius() const;
	/*---计算圆面积---*/
	double area() const;
	friend ostream& operator<<(ostream&, const Circle&);
private:
	double radius;
};