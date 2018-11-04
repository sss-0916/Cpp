#include "iostream"
#include "stack"
#include "list"
#include "string"
#include "cassert"
using namespace std;

int main()
{
	stack<string, list<string>> s1;
	s1.push("Tianshan district.");
	cout << "\"Tianshan district\" are pushed into the stack. " << endl;
	s1.push("Xinshi district.");
	cout << "\"Xinshi district\" are pushed into the stack. " << endl;
	s1.push("Shuimogou district.");
	cout << "\"Shuimogou district\" are pushed into the stack. " << endl; 
	s1.push("Shayibake district.");
	cout << "\"Shayibake district\" are pushed into the stack. " << endl;
	assert(s1.size() == 4);
	assert(s1.top() == "Shayibake district");
	cout << "The elements are poped from the stack." << endl;
	while (s1.size())
	{
		cout << " " << s1.top() << endl;
		s1.pop();
	}
	system("pause");
	return 0;
}