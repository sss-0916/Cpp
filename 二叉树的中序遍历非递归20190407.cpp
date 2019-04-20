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

void inOrder(Node* root){
	stack<Node*> s;
	Node* cur = root;
	while (cur != NULL || !s.empty()){
		while (cur != NULL){
			s.push(cur);
			cur = cur->left;
		}
		Node* top = s.top();
		s.pop();
		printf("%c ", top->value);
		cur = top->right;
	}
}