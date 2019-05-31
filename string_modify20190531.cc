#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

void stringModify(){
	string s("https://blog.csdn.net/sss_0916");
	string result;

	size_t start = s.find("://");
	start += 3;
	size_t end = s.find("/", start);

	result = s.substr(start, end - start);

	cout << "result: " << result << endl;
}

int main(){

	stringModify();

	return 0;
}
