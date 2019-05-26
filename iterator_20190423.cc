#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

const int n = 10;

void Display(const vector<int>& v){
	vector<int>::const_iterator cit = v.begin();
	while(cit != v.end()){
		cout << *cit << " ";
		++cit;
	}
	cout << endl;
}

int main(){

	vector<int> v;

	for(int i = 0; i < n; ++i){
		v.push_back(i);
	}

	vector<int>::iterator it = v.begin();
	while(it != v.end()){
		cout << *it << " ";
		++it;
	}
	cout << endl;

	vector<int>::reverse_iterator rit = v.rbegin();
	while(rit != v.rend()){
		cout << *rit << " ";
		++rit;
	}
	cout << endl;

	Display(v);

	return 0;
}
