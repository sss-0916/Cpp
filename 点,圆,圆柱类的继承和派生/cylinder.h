#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include "iostream"
#include "circle.h"
using namespace std;

class Cylinder : public Circle
{
public:
	/*---���캯��---*/
	Cylinder(double x = 0, double y = 0, 
		double r = 0, double h = 0);
	/*---�߶�����---*/
	void set_height(double);
	/*---�߶Ȼ�ȡ---*/
	double get_height() const;
	/*---��������---*/
	double area() const;
	/*---�������---*/
	double volume() const;
	friend ostream& operator<<(ostream&, const Cylinder&);
protected:
	double height;
};