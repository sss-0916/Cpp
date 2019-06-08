#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

const int n = 10;

void enlargeCapacity(){
	vector<int> v;

	size_t c = v.capacity();
	cout << "origin capacity: " << c << endl;

	for(int i = 0; i < n; ++i){
		v.push_back(i);

		if(c != v.capacity()){
			c = v.capacity();
			cout << "capaciry changed: " << c << endl;
		}
	}
}

int main(){

	enlargeCapacity();

	return 0;
}
