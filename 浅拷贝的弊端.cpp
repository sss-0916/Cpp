/*
**	ǳ�����ı׶�
*/

#define _CRT_SECURE_NO_WARNINGS

#include "iostream"
using namespace std;

/*---���������ɵ�Ĭ�ϵĸ�ֵ���������,������û�й�����Դ�ĳ���û������---*/
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

/*---���й�������Դ,ǳ�����Ƿ�������---*/
/*
**	���й�������Դʹ��ǳ�����ķ�ʽ,�ᵼ��
**	���������ܹ���ͬһ����Դ,�ᵼ��ͬһ
**	��Դ�ͷŶ������������,���������,��
**	���к�,��ӡ����~String(),˵��ͬһ����
**	������������������,Ҳ���ǵ���������free
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