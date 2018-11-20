#include "point.h"

/*---Point�Ĺ��캯��---*/
Point::Point(double a, double b)
{
	x = a;
	y = b;
}

/*---����x��y������ֵ---*/
void Point::set_point(double a, double b)
{
	x = a;
	y = b;
}

/*---���������"<<",ʹ֮������������---*/
ostream& operator<<(ostream& output, const Point& p)
{
	output << "[ " << p.x << ", " << p.y << " ]" << endl;
	return output;
}