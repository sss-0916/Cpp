/*
**	��������,ʵ����������,�������볤���,���㳤��������
*/

#define _CRT_SECURE_NO_WARNINGS

#include "iostream"
using namespace std;

class Rectangle
{
public:
	/*---���������䳤���---*/
	void element_input(void);

	/*---�������---*/
	int volume_rectangle();
private:
	int length;
	int width;
	int height;
};

/*---���������䳤���---*/
void Rectangle::element_input()
{
	cin >> length;
	cin >> width;
	cin >> height;
}

/*---�������---*/
int Rectangle::volume_rectangle()
{
	return length * width * height;
}

int main()
{
	Rectangle r1;
	int volume_1 = 0;
	printf("please input length, width, height: \n");
	r1.element_input();
	volume_1 = r1.volume_rectangle();
	printf("The volume is %d.\n", volume_1);
	system("pause");
	return 0;
}