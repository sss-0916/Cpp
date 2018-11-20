#include "circle.h"

/*---定义构造函数,对圆心坐标和半径初始化---*/
Circle::Circle(double a, double b, double r) :
				Point(a, b), radius(r){}

/*---设置半径值---*/
void Circle::set_radius(double r)
{
	radius = r;
}

/*---读取半径值---*/
double Circle::get_radius() const
{
	return radius;
}

/*---计算圆面积---*/
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