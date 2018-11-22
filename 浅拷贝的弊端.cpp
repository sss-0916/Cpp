/*
**	浅拷贝的弊端
*/

#define _CRT_SECURE_NO_WARNINGS

#include "iostream"
using namespace std;

/*---编译期生成的默认的赋值运算符重载,在这种没有管理资源的场景没有问题---*/
class Date
{
public:
	Date(int y = 1900, int m = 1, int d = 1)
	{
		year = y;
		month = m;
		day = d;
	}
	void display()
	{
		cout << year << " - " << month << " - " << day << endl;
	}
private:
	int year;
	int month;
	int day;
};

int main()
{
	Date d1(2018, 11, 22), d2;
	d2 = d1;
	d2.display();
	system("pause");
	return 0;
}

/*---类中管理了资源,浅拷贝是否还适用呢---*/
/*
**	类中管理了资源使用浅拷贝的方式,会导致
**	多个对象可能共用同一份资源,会导致同一
**	资源释放多次引起程序崩溃,下面的例子,程
**	运行后,打印两次~String(),说明同一份资
**	调用了两次析构函数,也就是调用了两次free
*/
class String
{
public:
	String(const char* str = "jack")
	{
		_str = (char*)malloc(strlen(str) + 1);
		strcpy(_str, str);
	}
	~String()
	{
		cout << "~String()" << endl;
		free(_str);
	}
private:
	char* _str;
};

int main()
{
	String s1("hello");
	String s2("world");
	s1 = s2;
	system("pause");
	return 0;
}