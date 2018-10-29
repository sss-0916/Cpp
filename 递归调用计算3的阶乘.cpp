#include "iostream"
using namespace std;

int Factor(int n)
{
	int answer = 0;
	if (n == 1)
	{
		return 1;
	}
	answer = Factor(n - 1) * n;
	return answer;
}

int main()
{
	int n = 5;
	int result = 0;
	result = Factor(n);
	cout << "5! = 5 x 4 x 3 x 2 x 1 = " << result << " " << endl;
	system("pause");
	return 0;
}