#include "cylinder.h"

/*---���幹�캯��---*/
Cylinder::Cylinder(double a, double b, double r, double h)
	: Circle(a, b, r), height(h){}

/*---����Բ���ߵĺ���---*/
void Cylinder::set_height(double h)
{
	height = h;
}

/*---�����ȡԲ���ߵĺ���---*/
double Cylinder::get_height() const
{
	return height;
}

/*---�������Բ��������ĺ���---*/
double Cylinder::area() const
{
	return 2 * Circle::area() + 2 * 3.14 * get_radius() * height;
}

/*---����Բ������ĺ���---*/
double Cylinder::volume() const
{
	return Circle::area() * height;
}

/*---�����<<������---*/
ostream& operator<<(ostream& output, const Cylinder& cy)
{
	output << "Center = [ " << cy.get_x() << ", " << cy.get_y()
		<< " ], r = " << cy.get_radius() << ", h = " << cy.height
		<< endl << "area : " << cy.area() << ", volume = "
		<< cy.volume() << endl;
	return output;
}