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

//�����������ѡ��release,���Ե�������
//�۲췴��ര�ڣ�����add��������û��callָ��
//û��callָ��˵��add����������
//�Ӹ��������������Ա�

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