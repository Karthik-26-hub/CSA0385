#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
	struct node* prev;
};
void insertatbeginning(struct node** head,int newdata)
{
	struct node* newnode=(struct node*)malloc(sizeof(struct node*));
	if(newnode==NULL)
	{
		printf("memory allocation is failed\n");
		exit(1);
	}
	newnode->data=newdata;
	newnode->next=*head;
	newnode->prev=NULL;
	if(*head!=NULL)
	{
		(*head)->prev=newnode;
	}
	*head=newnode;
}
void printforward(struct node* node)
{
	while(node!=NULL)
	{
		printf("%d<->",node->data);
		node=node->next;
	}
	printf("NULL\n");
}
void printbackword(struct node* node)
{
	struct node* last;
	while(node!=NULL)
	{
		last=node;
		node=node->next;
	}
	while(last!=NULL)
	{
		printf("%d<->",last->data);
		last=last->prev;
	}
	printf("NULL\n");
}
int main()
{
	struct node* head=NULL;
	insertatbeginning(&head,3);
	insertatbeginning(&head,7);
	insertatbeginning(&head,9);
	printf("doubly linked list(forward):");
	printforward(head);
	printf("doubly linked list (backward):");
	printbackword(head);
	return 0;
}
