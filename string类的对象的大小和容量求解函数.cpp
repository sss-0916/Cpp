#include "iostream"
#include "string"
using namespace std;

int main()
{
	int size = 0;
	int length = 0;
	unsigned long maxsize = 0;
	int capacity = 0;
	string str("12345678");
	string str_custom;
	str_custom = str;
	size = str_custom.size();
	length = str_custom.length();
	maxsize = str_custom.max_size();
	capacity = str_custom.capacity();
	cout << "size = " << size << endl;
	cout << "length = " << length << endl;
	cout << "max_size = " << maxsize << endl;
	cout << "capacity = " << capacity << endl;
	system("pause");
	return 0;
}