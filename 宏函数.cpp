#include "iostream"
using namespace std;

#define Max(a, b) ((a) > (b) ? (a) : (b))

int main()
{
	int a1 = 10;
	int a2 = 20;
	cout << Max(a1, a2) << endl;
	cout << Max(a1, a2++) << endl;//��ӡ21
	cout << Max(a1, ++a2) << endl;//��ӡ24
	system("pause");
	return 0;
}