#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stack>
using namespace std;

typedef char ElementType;

typedef struct Node {
	ElementType value;
	struct Node* left;
	struct Node* right;
} Node;

void postOrder(Node* root){
	stack<Node*> s;
	Node* cur = root;
	Node* last = NULL;
	while (cur != NULL || !s.empty()){
		while (cur != NULL){
			s.push(cur);
			cur = cur->left;
		}
	}
	Node* top = s.top();
	if (top->right == NULL){
		printf("%c ", top->value);
		s.pop();
		last = top;
	}
	else if (top->right == last){
		printf("%c ", top->value);
		s.pop();
		last = top;
	}
	else{
		cur = top->right;
	}
}