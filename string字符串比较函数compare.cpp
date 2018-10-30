#include "iostream"
#include "string"
using namespace std;

int main()
{
	string A("aBcdef");
	string B("AbcdEf");
	string C("123456");
	string D("123dfg");
	//各种比较方法
	int m = A.compare(B);	//完整的A和B的比较
	int n = A.compare(1, 5, B);		//A的1开始的5个和B的比较
	int p = A.compare(1, 5, B, 4, 2);		//A的1开始的5个和B的4开始的2个
	int q = C.compare(0, 3, D, 0, 3);		//C的0开始的3个和D的0开始的3个
	cout << "m = " << m << ", n = " << n << ", p = " << p << ", q = " << q << endl;
	system("pause");
	return 0;
}