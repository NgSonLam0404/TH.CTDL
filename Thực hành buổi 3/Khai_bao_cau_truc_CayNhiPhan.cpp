#include<stdio.h>
struct Node{
	int data;
	struct Node* left;
	struct Node* right;
};
typedef Node node;

node* root;
