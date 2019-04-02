#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <queue>
using namespace std;

class MyStack{
public:
	queue<int> q;

	MyStack(){
	}

	/*---»Î’ª---*/
	void push(int x){
		q.push(x);
	}

	/*---≥ˆ’ª---*/
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

	/*---’ª∂•---*/
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

	/*---≈–ø’---*/
	bool empty()
	{
		return q.empty();
	}
};