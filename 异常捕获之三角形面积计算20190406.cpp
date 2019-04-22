#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cmath>
using namespace std;

double triangle(double a, double b, double c){
	double area;
	double s = (a + b + c) / 2;
	if (a + b <= c || a + c <= b || b + c <= a){
		throw a;
	}
	area = sqrt(s * (s - a) * (s - b) * (s - c));
	return area;
}

int main(){
	double a, b, c;
	cout << "please input a, b and c: " << endl;
	cin >> a >> b >> c;
	try{
		while (a > 0 && b > 0 && c > 0){
			cout << triangle(a, b, c) << endl;
			cout << "please input a, b and c: " << endl;
			cin >> a >> b >> c;
		}
	}
	catch (double){
		cout << "a = " << a << ", b = " << b 
			<< ", c = " << c << ", this is not a triangle!" 
			<< endl;
	}
	cout << "end" << endl;
	system("pause");
	return 0;
}