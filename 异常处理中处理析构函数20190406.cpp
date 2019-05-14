#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
using namespace std;

class Student{
public:
	Student(int n, string nam){
		cout << "constructot -" << n << endl;
		num = n;
		name = nam;
	}
	~Student(){
		cout << "destructot -" << num << endl;
	}
	void getData();

private:
	int num;
	string name;
};

void Student::getData(){
	if (num == 0){
		throw num;
	}
	else{
		cout << num << " " << name << endl;
		cout << "in getData()" << endl;
	}
}

void fun(){
	Student stu1(1101, "Tan");
	stu1.getData();
	Student stu2(0, "Li");
	stu2.getData();
}

int main(){
	cout << "main begin" << endl;
	cout << "call fun()" << endl;
	try{
		fun();
	}
	catch (int n){
		cout << "num = " << n << ", error!" << endl;
	}
	cout << "main end" << endl;
	system("pause");
	return 0;
}