#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

void notMemberFuncTest(){
	string s;
	 
	cout << "getline: " << endl;
	getline(cin, s);
	cout << s << endl;
}

int main(){

	notMemberFuncTest();

	return 0;
}
