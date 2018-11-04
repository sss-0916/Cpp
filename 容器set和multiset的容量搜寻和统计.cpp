#include "iostream"
#include "set"
#include "algorithm"
using namespace std;

void print(int ele)
{
	cout << ele << ", ";
}

int main()
{
	typedef set<int> SET;
	typedef multiset<int> MSET;
	SET s1;
	MSET s2;
	SET::iterator it;
	MSET::iterator mit;
	pair<SET::iterator, SET::iterator> p1;
	pair<MSET::iterator, MSET::iterator> mp1;
	s1.insert(10);
	s1.insert(15);
	s1.insert(21);
	s1.insert(17);
	s1.insert(11);
	s1.insert(16);
	s1.insert(20);
	s1.insert(18);
	s1.insert(20);		//初始化
	cout << "The SET s1 is below: " << endl;
	for_each(s1.begin(), s1.end(), print);
	cout << endl;
	cout << "The MSET s2 is below: " << endl;
	for_each(s2.begin(), s2.end(), print);
	cout << endl;
	// 计算容量
	int size = s1.size();
	int msize = s2.size();
	cout << "The size of the set s1: " << size << endl;
	cout << "The size of the multiset s2: " << msize << endl;
	// 最大容量
	int max_size = s1.max_size();
	int max_msize = s2.max_size();
	cout << "The max_size of the set s1: " << max_size << endl;
	cout << "The max_size of the multiset s2: " << max_msize << endl;
	// 指定元素的个数
	int cnt = s1.count(10);
	int mcnt = s2.count(20);
	cout << "The count of '10' in set s1: " << cnt << endl;
	cout << "The count of '20' in multiset s2: " << mcnt << endl;
	// 查找元素
	it = s1.find(21);
	mit = s2.find(18);
	cout << "The element with a key '21' is: " << *it << endl;
	cout << "The element with a key '18' is: " << *mit << endl;
	// 查找元素
	it = s1.lower_bound(15);
	mit = s2.lower_bound(16);
	if (it == s1.end())
	{
		cout << "The element with a key 15 in s1 is doesn't exist. " << endl;
	}
	else
	{
		cout << "The element with a key 15 is s1 is: " << *it << endl;
	}
	if (mit == s2.end())
	{
		cout << "The element with a key 16 in s2 is doesn't exist. " << endl;
	}
	else
	{
		cout << "The element with a key 16 is s2 is: " << *mit << endl;
	}
	// 查找元素
	it = s1.upper_bound(15);
	mit = s2.upper_bound(16);
	if (it == s1.end())
	{
		cout << "The element with a key >15 in s1 is doesn't exist. " << endl;
	}
	else
	{
		cout << "The element with a key >15 is s1 is: " << *it << endl;
	}
	if (mit == s2.end())
	{
		cout << "The element with a key >16 in s2 is doesn't exist. " << endl;
	}
	else
	{
		cout << "The element with a key >16 is s2 is: " << *mit << endl;
	}
	// 查找元素
	p1 = s1.equal_range(15);
	mp1 = s2.equal_range(16);
	if (p1.first == s1.end())
	{
		cout << "The element with a key >=15 in s1 is doesn't exist. " << endl;
	}
	else
	{
		cout << "The element with a key =15 is s1 is: " << *p1.first << endl;
		cout << "The element with a key >=15 is s1 is: " << *p1.second << endl;
	}
	if (mp1.first == s2.end())
	{
		cout << "The element with a key >=16 in s2 is doesn't exist. " << endl;
	}
	else
	{
		cout << "The element with a key =16 is s2 is: " << *mp1.first << endl;
		cout << "The element with a key >=16 is s2 is: " << *mp1.second << endl;
	}
	system("pause");
	return 0;
}