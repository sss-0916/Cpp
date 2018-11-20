#include "cylinder.h"

/*---定义构造函数---*/
Cylinder::Cylinder(double a, double b, double r, double h)
	: Circle(a, b, r), height(h){}

/*---设置圆柱高的函数---*/
void Cylinder::set_height(double h)
{
	height = h;
}

/*---定义读取圆柱高的函数---*/
double Cylinder::get_height() const
{
	return height;
}

/*---定义计算圆柱表面积的函数---*/
double Cylinder::area() const
{
	return 2 * Circle::area() + 2 * 3.14 * get_radius() * height;
}

/*---计算圆柱体积的函数---*/
double Cylinder::volume() const
{
	return Circle::area() * height;
}

/*---运算符<<的重载---*/
ostream& operator<<(ostream& output, const Cylinder& cy)
{
	output << "Center = [ " << cy.get_x() << ", " << cy.get_y()
		<< " ], r = " << cy.get_radius() << ", h = " << cy.height
		<< endl << "area : " << cy.area() << ", volume = "
		<< cy.volume() << endl;
	return output;
}