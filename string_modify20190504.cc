#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

void stringModify(){
	string s("hello");
	cout << "s: " << s << endl;

	cout << endl << "void push_back(char c): " << endl;
	s.push_back(',');
	cout << "s: " << s << endl;

	cout << endl << "string& operator+=(char c): " << endl;
	s += ' ';
	cout << "s: " << s << endl;

	cout << endl << "string& operator+=(const char* s): " << endl;
	s += "wor";
	cout << "s: " << s << endl;

	string temp("ld!");
	cout << endl << "string& operator+=(const string& s): " << endl;
	s += temp;
	cout << "s: " << s << endl;

	s.push_back('\0');
	s += "string!";
	cout << endl << "C++ string: " << s << endl;
	cout << "C string: " << s.c_str() << endl;
}

int main(){

	stringModify();

	return 0;
}
