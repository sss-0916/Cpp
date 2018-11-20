/*
**	时间类的简单测试
*/

#define _CRT_SECURE_NO_WARNINGS

#include "iostream"
using namespace std;

class Time
{
public:
	void set_time(int _hour, int _minute, int _sec);
	void show_time(void);
private:
	int hour;
	int minute;
	int sec;
};

Time t;

int main()
{
	t.set_time(8, 15, 30);
	t.show_time();
	system("pause");
	return 0;
}

void Time::set_time(int _hour, int _minute, int _sec)
{
	hour = _hour;
	minute = _minute;
	sec = _sec;
}

void Time::show_time(void)
{
	cout << t.hour << ":" << t.minute << ":" << t.sec << endl;
}