#include "iostream"
#include "vector"
#include "algorithm"
#include "functional"
#include "iterator"
using namespace std;

class myradom		//可产生随机数的仿函数
{
public:
	ptrdiff_t operator()(ptrdiff_t max)
	{
		double temp;
		temp = static_cast<double>(rand()) / static_cast<double>(RAND_MAX);
		return static_cast<ptrdiff_t>(temp*max);
	}
};

int main()
{
	vector<int> v1;
	int dim[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	v1.assign(dim, dim + 9);
	cout << "v1: ";
	copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, ", "));
	cout << endl;
	random_shuffle(v1.begin(), v1.end());
	cout << "乱序v1: " << endl;
	copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, ", "));
	cout << endl;
	sort(v1.begin(), v1.end());
	cout << "重新排序v1: ";
	copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, ", "));
	cout << endl;
	myradom mrd;
	random_shuffle(v1.begin(), v1.end(), mrd);
	cout << "重排v1: ";
	copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, ", "));
	cout << endl;
	system("pause");
	return 0;
}