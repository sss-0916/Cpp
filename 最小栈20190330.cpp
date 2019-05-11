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

	/*---ѹջ---*/
	void push(int x){
		normal.push(x);
		if (min.empty() || x <= min.top()){
			min.push(x);
		}
		else{
			min.push(min.top());
		}
	}

	/*---��ջ---*/
	void pop(){
		normal.pop();
		min.pop();
	}

	/*---����ջ��---*/
	int top(){
		return normal.top();
	}

	/*---��Сֵ---*/
	int getMin(){
		return min.top();
	}
};