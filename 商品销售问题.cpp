/*
**	��������Ա������������������ۿ�
*/

#define _CRT_SECURE_NO_WARNINGS

#include "iostream"
using namespace std;

class Salesman
{
public:
	Salesman(int n, int q, double p) :
		num(n), quantity(q), price(p){}
	void total();
	static void average();
	static void display()
	{
		cout << "�����۶�sum: " << sum << endl;
		cout << "ÿ����Ʒ��ƽ���ۼ�: " << average_price << endl;
	}
private:
	int num;
	int quantity;
	double price;
	/*---�۳����ܼ���---*/
	static int sum_quatity;
	/*---�����ۿ�---*/
	static double sum;
	/*---��Ʒ����ƽ���۸�---*/
	static double average_price;
};

/*---�����۶�ļ���---*/
void Salesman::total()
{
	/*---����10��,9.8��---*/
	if (quantity > 10)
	{
		sum += price * quantity * (1 - 9.8 * 0.01);
	}
	else
	{
		sum += price * quantity;
	}
	sum_quatity += quantity;
}

/*---��ƽ���۸�---*/
void Salesman::average()
{
	average_price = sum / sum_quatity;
}

/*---���������ĳ�ʼ��---*/
int Salesman::sum_quatity = 0;

/*---�����۶�ĳ�ʼ��---*/
double Salesman::sum = 0;

/*---ƽ���۸�ĳ�ʼ��---*/
double Salesman::average_price = 0;

int main()
{
	Salesman s[3] = { Salesman(101, 5, 23.5),
		Salesman(102, 12, 24.56),
		Salesman(103, 100, 21.5) };
	for (int i = 0; i < 3; ++i)
	{
		s[i].total();
	}
	Salesman::average();
	Salesman::display();
	system("pause");
	return 0;
}