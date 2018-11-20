#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include "iostream"
#include "point.h"
using namespace std;

class Circle : public Point
{
public:
	/*---���캯��---*/
	Circle(double x = 0, double y = 0, double r = 0);
	void set_radius(double);
	/*---��ȡ�뾶ֵ---*/
	double get_radius() const;
	/*---����Բ���---*/
	double area() const;
	friend ostream& operator<<(ostream&, const Circle&);
private:
	double radius;
};