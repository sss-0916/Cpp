#include "iostream"
using namespace std;

int main()
{
	void count(bool YN, int& counter);
	int counter = 0;
	bool YN = 1;
	while (YN)
	{
		count(YN, counter);
		cout << counter << endl;
		if (counter > 5)
		{
			YN = 0;
		}
	}
	system("pause");
	return 0;
}

void count(bool YN, int& counter)
{
	if (YN)
	{
		counter++;
	}
}