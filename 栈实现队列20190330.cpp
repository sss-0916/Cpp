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

	/*---入队---*/
	void push(int v){
		in.push(v);
	}

	/*---出队---*/
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

	/*---队首元素---*/
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

	/*---判空---*/
	bool empty(){
		return in.empty() && out.empty();
	}
};