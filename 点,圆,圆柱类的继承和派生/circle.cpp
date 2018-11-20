#include "circle.h"

/*---���幹�캯��,��Բ������Ͱ뾶��ʼ��---*/
Circle::Circle(double a, double b, double r) :
				Point(a, b), radius(r){}

/*---���ð뾶ֵ---*/
void Circle::set_radius(double r)
{
	radius = r;
}

/*---��ȡ�뾶ֵ---*/
double Circle::get_radius() const
{
	return radius;
}

/*---����Բ���---*/
double Circle::area() const
{
	return 3.14 * radius * radius;
}

ostream& operator<<(ostream& output, const Circle& c)
{
	output << "Center = [ " << c.x << ", " << c.y << "], r = "
		<< c.radius << ", area = " << c.area() << endl;
	return output;
}