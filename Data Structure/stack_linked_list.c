/* stack - linked list based implementation */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


struct Node {
	int data;
	struct Node* link;
};

struct Node* top;

struct Node* GetNewNode(int x) {
	struct Node* newNode =(struct Node*)malloc(sizeof(struct Node));
	newNode->data = x;
	newNode->link = NULL;
}

void Push(int x) {
	struct Node* newNode = GetNewNode(x);
	newNode->link = top;
	top = newNode;
}

void Pop() {
	struct Node* temp1 = top;
	if(top == NULL) {
		printf("stack underflow \n");
		return;
	}
	top = temp1->link;
	free(temp1);
}

void IsEmpty() {
	if(top == NULL) {
		printf("True \n");
		return;
	}
	printf("False \n");
}


void Top() {
	printf("%d ", top->data);
}

void Print() {
	printf("Stack: ");
	struct Node* temp1 = top;
	while(temp1!=NULL) {
		printf("%d ", temp1->data);
		temp1 = temp1->link;
	}
	printf("\n");
}



int main() {
	top = NULL;
	Push(5); Print();
	Push(10); Print();
	Pop(); Print();
	Pop(); Print();
	Pop(); Print();
	Push(3); Print();
	Push(4); Print();
	IsEmpty();
	Top();
	getch();
}