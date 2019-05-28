#include <iostream>
#include <stdlib.h>
#include <stack>
#include <string>

bool isMatching(std::string str){
	std::stack<char> s;

	for (auto e : str){
		switch (e){
		case '(':
			s.push(e);
			break;
		case ')':
		{
			if (s.empty() || s.top() != '('){
				return false;
			}
			else{
				s.pop();
			}
		}
			break;
		default:
			return false;
		}
	}

	return true;
}

int main(){

	std::string s;
	
	std::cin >> s;

	std::cout << s << std::endl;
	if (isMatching(s)){
		std::cout << "Matching!" << std::endl;
	}
	else{
		std::cout << "No matching!" << std::endl;
	}

	system("pause");
	return 0;
}