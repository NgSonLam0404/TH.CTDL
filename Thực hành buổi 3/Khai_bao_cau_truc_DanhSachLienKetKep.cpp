#include<stdio.h>

struct node{
	int data;
	struct node* prev;
	struct node* next;
};
typedef node NODE;

struct doublyLinkedList{
	NODE* head;
	NODE* tail;
}; 
