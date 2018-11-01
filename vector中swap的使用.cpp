#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

void OutToScreen(int& Ele)
{
	cout << Ele << ", ";
}

int main()
{
	vector<int> ci, cd;
	for (int i = 0; i < 10; i++)
	{
		ci.push_back(i);
		cd.push_back(i * 3);
	}
	cout << "vector-ci-below: " << endl;
	for_each(ci.begin(), ci.end(), OutToScreen);
	cout << endl;
	cout << "vector-cd-below: " << endl;
	for_each(cd.begin(), cd.end(), OutToScreen);
	cout << endl;
	cout << "---------swap---------" << endl;
	ci.swap(cd);
	cout << "vector-ci-below: " << endl;
	for_each(ci.begin(), ci.end(), OutToScreen);
	cout << endl;
	cout << "vector-cd-below: " << endl;
	for_each(cd.begin(), cd.end(), OutToScreen);
	cout << endl;
	system("pause");
	return 0;
}