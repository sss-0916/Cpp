#include "iostream"
#include "queue"
#include "string"
#include "list"
#include "cassert"
using namespace std;

int main()
{
	queue<string, list<string>> q1;
	q1.push("Beijing.");
	cout << "\"Beijing.\" are pushed into the queue. " << endl;
	q1.push("Shanghai.");
	cout << "\"Shanghai.\" are pushed into the queue. " << endl;
	q1.push("Urumuqi.");
	cout << "\"Urumuqi.\" are pushed into the queue. " << endl; 
	q1.push("Xian.");
	cout << "\"Xian.\" are pushed into the queue. " << endl;
	assert(q1.size() == 4);		//断言
	assert(q1.front() == "Hongkong.");
	cout << "The elements are poped from the queue by order." << endl;
	while (q1.size())
	{
		cout << " " << q1.front() << endl;
		q1.pop();		//取出缓存区的元素
	}
	system("pause");
	return 0;
}