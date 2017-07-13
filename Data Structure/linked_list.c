#include<conio.h>
#include<stdio.h>
#include<stdlib.h>


struct Node{
	int data;
	struct Node* next;
};
struct Node* head;


struct Node* getNewNode(int data){
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}


void insertAtHead(int data){
	struct Node* newNode = getNewNode(data);
	newNode->next = head;
	head = newNode;
}


void print(){
	struct Node* temp = head;
	while(temp!=NULL) {
		printf(" %d", temp->data);
		temp = temp->next;
	}
}


void main(){
	head = NULL;
	insertAtHead(5); print();
	insertAtHead(6); print();
	insertAtHead(7); print();
}