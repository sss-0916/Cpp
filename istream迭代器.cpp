#include "iostream"
#include "vector"
#include "iterator"
#include "algorithm"
using namespace std;

int main()
{
	vector<int> v1;
	istream_iterator<int> input_cin(cin);
	istream_iterator<int> i_eof;
	while (input_cin != i_eof)
	{
		*input_cin;
		v1.push_back(*input_cin);
		++input_cin;
	}
	copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, ", "));
	cout << endl;
	system("pause");
	return 0;
}