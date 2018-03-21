// A simple C program for traversal of a linked list with graphical ascii display
#include<stdio.h>
#include<stdlib.h>
#include <iostream>

struct Node
{
	int data;
	struct Node *next;
};

// This function prints contents of linked list starting from 
// the given node
void printList(struct Node *n)
{
	printf("\n[ data | address ]\n\n");
	printf("HEAD: [ %d @ %p ]-->", n->data, n->next);
	n = n->next;
	while (n != NULL)
	{
		if(n->next == false) {
			printf("[ %d @ (NULL) ] :TAIL", n->data);
		}
		else {
			printf("[ %d @ %p ]-->", n->data, n->next);
		}
		n = n->next;
	}
}

int main()
{
	struct Node* head = NULL;
	struct Node* second = NULL;
	struct Node* third = NULL;
	struct Node* fourth = NULL;

	// allocate 3 nodes in the heap  
	head = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));
	fourth = (struct Node*)malloc(sizeof(struct Node));

	printf("===========\n");
	printf("Enter data:\n");
	printf(">  ");
	std::cin >> head->data; //assign data in first node
	head->next = second; // Link first node with second   
	printf(">  ");
	std::cin >> second->data; //assign data to second node
	second->next = third;
	printf(">  ");
	std::cin >> third->data; //assign data to third node
	third->next = fourth;
	printf(">  ");
	std::cin >> fourth->data;
	fourth->next = NULL; //last node always points to null
	printf("===========");

	printList(head); // Prints linkedlist

	delete head;
	delete second;
	delete third;
	delete fourth; //free up all the memory
	return 0;
}