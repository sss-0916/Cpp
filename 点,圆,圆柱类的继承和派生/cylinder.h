#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include "iostream"
#include "circle.h"
using namespace std;

class Cylinder : public Circle
{
public:
	/*---构造函数---*/
	Cylinder(double x = 0, double y = 0, 
		double r = 0, double h = 0);
	/*---高度设置---*/
	void set_height(double);
	/*---高度获取---*/
	double get_height() const;
	/*---计算表面积---*/
	double area() const;
	/*---计算体积---*/
	double volume() const;
	friend ostream& operator<<(ostream&, const Cylinder&);
protected:
	double height;
};