#include <iostream>

class Empty{
};

int main(){

	Empty e1;
	Empty e2;
	Empty e3;

	std::cout << "&e1: " << &e1 << std::endl;
	std::cout << "&e2: " << &e2 << std::endl;
	std::cout << "&e3: " << &e3 << std::endl;

	return 0;
}
