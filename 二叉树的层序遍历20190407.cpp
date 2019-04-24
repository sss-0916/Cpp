#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <queue>
using namespace std;

typedef char ElementType;

typedef struct Node {
	ElementType value;
	struct Node* left;
	struct Node* right;
} Node;

void levelOrder(Node* root){
	if (root == NULL){
		printf("\n");
	}
	queue<Node* > q;
	q.push(root);
	while (!q.empty()){
		Node* front = q.front();
		q.pop();
		printf("%c ", front->value);
		if (front->left != NULL){
			q.push(front->left);
		}
		if (front->right != NULL){
			q.push(front->right);
		}
	}
	printf("\n");
}