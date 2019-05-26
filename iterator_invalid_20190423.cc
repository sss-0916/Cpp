#include <iostream>
#include <algorithm>
#include <vector>
using std::cout;
using std::endl;

void iteratorInvalid_erase(){
	std::vector<int> v;

	for(int i = 0; i < 5; ++i){
		v.push_back(i);
	}

	std::vector<int>::iterator pos = find(v.begin(), v.end(), 3);

	v.erase(pos);

	cout << "pos: " << *pos << endl;
}

void iteratorInvalid_insert(){
	std::vector<int> v;

	for(int i = 0; i < 5; ++i){
		v.push_back(i);
	}

	//cout << "capacity: " << v.capacity() << endl;

	std::vector<int>::iterator pos = find(v.begin(), v.end(), 4);

	v.insert(pos, 30);
	v.insert(pos, 30);
	v.insert(pos, 30);
	v.insert(pos, 30);
	v.insert(pos, 30);
	v.insert(pos, 30);
	v.insert(pos, 30);
	v.insert(pos, 30);
	v.insert(pos, 30);
	v.insert(pos, 30);
	v.insert(pos, 30);
	v.insert(pos, 30);
	v.insert(pos, 30);
	v.insert(pos, 30);
	v.insert(pos, 30);
	v.insert(pos, 30);
	v.insert(pos, 30);

	cout << "pos: " << *pos << endl;
}

void test(){
	std::vector<int> v;

	for(int i = 1; i < 5; ++i){
		v.push_back(i);
	}

	std::vector<int>::iterator it = v.begin();
	while(it != v.end()){
		if(*it % 2 == 0){
			v.erase(it);
		}
		++it;
	}
}

int main(){

	//iteratorInvalid_erase();

	//iteratorInvalid_insert();

	test();

	return 0;
}
