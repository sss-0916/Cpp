/*
**	1.3 ˼����
*/

#define _CRT_SECURE_NO_WARNINGS

#include "iostream"
using namespace std;

class CPoint
{
public:
	CPoint(int temp_x = 0, int temp_y = 0)
	{
		x = temp_x;
		y = temp_y;
	}
	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}
private:
	int x;
	int y;
};

class CCircle : public CPoint
{
public:	
	CCircle(int r = 2, int a = 0, int b = 0)
		: CPoint(a, b)
	{
		radius = r;
	}
	bool isInCircle(CPoint& point)
	{
		return ((point.getX() - getX())
			* (point.getX() - getX())
			+ (point.getY() - getY())
			* (point.getY() - getY()))
			< radius * radius;
	}
private:
	int radius;
};

int main()
{
	//�뾶Ϊ2, Բ��Ϊ(1, 1)
	CCircle c(2, 0, 0);
	//��(2, 4)
	CPoint cp(2, 4);
	int flag = 0;
	flag = c.isInCircle(cp);
	if (flag == 1)
	{
		printf("��Բ��!\n");
	}
	else
	{
		printf("����Բ��!\n");
	}
	system("pause");
	return 0;
}