#include "date.h"

int main()
{
	Date d1, d2, d3, d4, d5;
	d1.display();
	d1 = d1 + 66;
	d1.display();
	d2 = d2 - 90;
	d2.display();
	if (d1 > d2)
	{
		cout << "d1 > d2" << endl;
	}
	d1 = d1 - 200;
	d1.display();
	if (d1 < d2)
	{
		cout << "d1 < d2" << endl;
	}
	++d3;
	d3.display();
	--d4;
	d4.display();
	if (d3 != d4)
	{
		cout << "d3 != d4" << endl;
	}
	system("pause");
	return 0;
}