#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
void insertatbegginnig(struct node** head,int newdata)
{
	struct node* newnode=(struct node*)malloc(sizeof(struct node*));
	if(newnode==NULL)
	{
		printf("memory allocation is failed \n");
		exit(1);
	}
	newnode->data=newdata;
	newnode->next=*head;
	*head=newnode;
}
void printlist(struct node* node)
{
	while(node!=NULL)
	{
		printf("%d->",node->data);
		node=node->next;
	}
}
int main()
{
	struct node* head=NULL;
	insertatbegginnig(&head,3);
	insertatbegginnig(&head,7);
	insertatbegginnig(&head,9);
	return 0;
}
