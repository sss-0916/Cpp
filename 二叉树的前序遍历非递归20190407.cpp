#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stack>
using namespace std;

typedef char ElementType;

/*---½áµã---*/
typedef struct Node {
	ElementType value;
	struct Node* left;
	struct Node* right;
} Node;

void preOrder(Node* root){
	stack<Node*> s;
	Node* cur = root;
	while (cur != NULL || !s.empty()){
		while (cur != NULL){
			printf("%c ", cur->value);
			s.push(cur);
			cur = cur->left;
		}
		Node* top = s.top();
		s.pop();
		cur = top->right;
	}
}