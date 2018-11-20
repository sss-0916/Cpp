#include "point.h"

/*---Point的构造函数---*/
Point::Point(double a, double b)
{
	x = a;
	y = b;
}

/*---设置x和y的坐标值---*/
void Point::set_point(double a, double b)
{
	x = a;
	y = b;
}

/*---重载运算符"<<",使之能输出点的坐标---*/
ostream& operator<<(ostream& output, const Point& p)
{
	output << "[ " << p.x << ", " << p.y << " ]" << endl;
	return output;
}