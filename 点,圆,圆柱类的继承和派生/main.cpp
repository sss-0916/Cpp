/*
**	点,圆,圆柱类的继承和派生
*/

#include "cylinder.h"

int main()
{
	/*---定义Cylinder类对象并初始化---*/
	Cylinder cy1(3.5, 6.4, 5.2, 10);
	cout << "original cylinder: " << endl
		<< "x = " << cy1.get_x() << ", y = "
		<< cy1.get_y() << ", r = " << cy1.get_radius()
		<< ", h = " << cy1.get_height() << endl
		<< "area = " << cy1.area() << ", volume = "
		<< cy1.volume() << endl;
	cy1.set_height(15);
	cy1.set_radius(7.5);
	cy1.set_point(5, 5);
	cout << endl << "new cylinder: " << endl << cy1;
	Point& pref = cy1;
	cout << endl << "pref as point: " << pref;
	Circle& cref = cy1;
	cout << endl << "cref as a circle: " << cref;
	system("pause");
	return 0;
}
