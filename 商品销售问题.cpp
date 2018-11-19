/*
**	三个销售员的销售情况，求总销售款
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
		cout << "总销售额sum: " << sum << endl;
		cout << "每件商品的平均售价: " << average_price << endl;
	}
private:
	int num;
	int quantity;
	double price;
	/*---售出的总件数---*/
	static int sum_quatity;
	/*---总销售款---*/
	static double sum;
	/*---商品销售平均价格---*/
	static double average_price;
};

/*---总销售额的计算---*/
void Salesman::total()
{
	/*---大于10件,9.8折---*/
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

/*---求平均价格---*/
void Salesman::average()
{
	average_price = sum / sum_quatity;
}

/*---销售总量的初始化---*/
int Salesman::sum_quatity = 0;

/*---总销售额的初始化---*/
double Salesman::sum = 0;

/*---平均价格的初始化---*/
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