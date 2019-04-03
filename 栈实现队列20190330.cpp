#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stack>
using namespace std;

class MyQueue{
public:
	stack<int> in;
	stack<int> out;

	MyQueue(){
	}

	/*---���---*/
	void push(int v){
		in.push(v);
	}

	/*---����---*/
	int pop(){
		if (out.empty()){
			while (!in.empty()){
				int v = in.top();
				in.pop();
				out.push(v);
			}
		}
		int v = out.top();
		out.pop();
		return v;
	}

	/*---����Ԫ��---*/
	int peek(){
		if (out.empty()){
			while (!in.empty()){
				int v = in.top();
				in.pop();
				out.push(v);
			}
		}
		int v = out.top();
		return v;
	}

	/*---�п�---*/
	bool empty(){
		return in.empty() && out.empty();
	}
};