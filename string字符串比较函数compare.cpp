#include "iostream"
#include "string"
using namespace std;

int main()
{
	string A("aBcdef");
	string B("AbcdEf");
	string C("123456");
	string D("123dfg");
	//���ֱȽϷ���
	int m = A.compare(B);	//������A��B�ıȽ�
	int n = A.compare(1, 5, B);		//A��1��ʼ��5����B�ıȽ�
	int p = A.compare(1, 5, B, 4, 2);		//A��1��ʼ��5����B��4��ʼ��2��
	int q = C.compare(0, 3, D, 0, 3);		//C��0��ʼ��3����D��0��ʼ��3��
	cout << "m = " << m << ", n = " << n << ", p = " << p << ", q = " << q << endl;
	system("pause");
	return 0;
}