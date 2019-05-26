#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

void enlargeCapacity(){
	string s;

	size_t c = s.capacity();
	cout << "origin capaciry: " << c << endl;

	for(int i = 0; i < 100; ++i){
		s += 'c';

		if(c != s.capacity()){
			c = s.capacity();
			cout << "capacity changed: " << c << endl;
		}
	}
}

int main(){

	enlargeCapacity();

	return 0;
}
