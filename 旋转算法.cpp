#include "iostream"
#include "vector"
#include "algorithm"
#include "iterator"
using namespace std;

int main()
{
	int dim[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	vector<int> v1, v2;
	v1.assign(dim, dim + 9);
	v2.assign(v1.begin(), v1.end());
	cout << "v1: " << endl;
	copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, ", "));
	cout << endl;
	cout << "v1第一次旋转:" << endl;
	rotate(v1.begin(), v1.begin() + 4, v1.end());
	copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, ", "));
	cout << endl;
	cout << "v1第二次旋转: " << endl;
	rotate_copy(v1.begin(), v1.begin() + 3, v1.end(), ostream_iterator<int>(cout, ", "));
	cout << endl;
	cout << "v2: " << endl;
	copy(v2.begin(), v2.end(), ostream_iterator<int>(cout, ", "));
	cout << endl;
	cout << "v2第一次旋转: " << endl;
	rotate(v2.begin(), v2.begin() + 2, v2.end() - 3);
	copy(v2.begin(), v2.end(), ostream_iterator<int>(cout, ", "));
	cout << endl;
	cout << "v2第二次旋转: " << endl;
	rotate_copy(v2.begin(), v2.begin() + 3, v2.end(), ostream_iterator<int>(cout, ", "));
	cout << endl;
	system("pause");
	return 0;
}