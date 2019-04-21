#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

void f3(){
	double a = 0;
	try{
		throw a;
	}
	catch (double){
		cout << "error 3!";
		throw;
	}
	cout << "end 3" << endl;
}

void f2(){
	try{
		f3();
	}
	catch (int){
		cout << "error 2!";
	}
	cout << "end 2" << endl;
}

void f1(){
	try{
		f2();
	}
	catch (char){
		cout << "error 1!";
	}
	cout << "end 1" << endl;
}

int main(){
	try{
		f1();
	}
	catch (double){
		cout << "error 0!";
	}	
	cout << "end 0" << endl;
	system("pause");
	return 0;
}