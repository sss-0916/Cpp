/*
**	长方体类,实现三个功能,键盘输入长宽高,计算长方体的体积
*/

#define _CRT_SECURE_NO_WARNINGS

#include "iostream"
using namespace std;

class Rectangle
{
public:
	/*---键盘输入其长宽高---*/
	void element_input(void);

	/*---体积计算---*/
	int volume_rectangle();
private:
	int length;
	int width;
	int height;
};

/*---键盘输入其长宽高---*/
void Rectangle::element_input()
{
	cin >> length;
	cin >> width;
	cin >> height;
}

/*---体积计算---*/
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