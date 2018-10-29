#include "iostream"
#include "cmath"
using namespace std;

int main()
{
	double pi = 3.1415926;
	double radius = 0;
	double area = 0;
	double girth = 0;
	cout << "ÇëÊäÈëÔ²µÄ°ë¾¶£º" << endl;
	cin >> radius;
	area = pi * pow(radius, 2);
	girth = 2 * pi * radius;
	cout << "area = " << area << "; girth = " << girth << endl;
	system("pause");
	return 0;
}