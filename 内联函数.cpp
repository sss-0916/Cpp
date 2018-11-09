#include "iostream"
using namespace std;

inline int add(int a1, int a2)
{
	return a1 + a2;
}

int sub(int a1, int a2)
{
	return a2 - a1;
}

//解决方案配置选择release,调试单步运行
//观察反汇编窗口，看看add函数下有没有call指令
//没有call指令说明add是内联函数
//加个非内联函数做对比

int main()
{
	int a = 1;
	int b = 2;
	int c = add(a, b);
	int d = sub(a, b);
	cout << c << endl;
	cout << d << endl;
	system("pause");
	return 0;
}