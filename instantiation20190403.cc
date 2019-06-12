#include <iostream>
using std::cout;
using std::endl;

template <typename T>
T Add(T left, T right){
	return left + right;
}

int main(){

	int ai = 1, bi = 2;
	int sumi = Add(ai, bi);
	cout << "ai + bi = " << sumi << endl;

	double ad = 1.11, bd = 2.22;
	double sumd = Add(ad, bd);
	cout << "ad + bd = " << sumd << endl;

	Add(ai, bd);

	return 0;
}
