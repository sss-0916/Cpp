#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <queue>
using namespace std;

typedef char ElementType;

/*---½áµã---*/
typedef struct Node {
	ElementType value;
	struct Node* left;
	struct Node* right;
} Node;

bool isComplete(Node* root){
	queue<Node*> q;
	q.push(root);
	while (true){
		Node* front = q.front();
		q.pop();
		if (front == NULL){
			break;
		}
		q.push(front->left);
		q.push(front->right);
	}
	while (!q.empty()){
		Node* front = q.front();
		q.pop();
		if (front != NULL){
			return false;
		}
	}
	return true;
}