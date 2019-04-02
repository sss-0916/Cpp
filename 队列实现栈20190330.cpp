#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <queue>
using namespace std;

class MyStack{
public:
	queue<int> q;

	MyStack(){
	}

	/*---��ջ---*/
	void push(int x){
		q.push(x);
	}

	/*---��ջ---*/
	int pop(){
		int i = 0;
		for (i = 0; i < q.size() - 1; ++i){
			int v = q.front();
			q.pop();
			q.push(v);
		}
		int v = q.front();
		q.pop();
		return v;
	}

	/*---ջ��---*/
	int top(){
		int i = 0;
		for (i = 0; i < q.size() - 1; ++i){
			int v = q.front();
			q.pop();
			q.push(v);
		}
		int v = q.front();
		q.pop();
		q.push(v);
		return v;
	}

	/*---�п�---*/
	bool empty()
	{
		return q.empty();
	}
};