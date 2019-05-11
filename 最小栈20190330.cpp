#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stack>
using namespace std;

class MinStack{
public:
	stack<int> normal;
	stack<int> min;

	MinStack(){
	}

	/*---压栈---*/
	void push(int x){
		normal.push(x);
		if (min.empty() || x <= min.top()){
			min.push(x);
		}
		else{
			min.push(min.top());
		}
	}

	/*---出栈---*/
	void pop(){
		normal.pop();
		min.pop();
	}

	/*---返回栈顶---*/
	int top(){
		return normal.top();
	}

	/*---最小值---*/
	int getMin(){
		return min.top();
	}
};