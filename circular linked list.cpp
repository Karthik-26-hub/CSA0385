#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node* next;
    struct node* prev;
};
void insertAtBeginning(struct node** head, int newdata) 
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode == NULL) 
	{
        printf("Memory allocation failed\n");
        exit(1);
    }
    newnode->data = newdata;
    if (*head == NULL) 
	{
        newnode->next = newnode;
        newnode->prev = newnode;
        *head = newnode;
    } else {
        struct node* tail = (*head)->prev; 
        newnode->next = *head;
        newnode->prev = tail;
        tail->next = newnode;
        (*head)->prev = newnode;
        *head = newnode;
    }
}
void printList(struct node* head) 
{
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    struct node* temp = head;
    do 
	{
        printf("%d->", temp->data);
        temp = temp->next;
    } 
	while (temp != head);
    printf("(head)\n");
}
int main() {
    struct node* head = NULL;
    insertAtBeginning(&head, 3);
    insertAtBeginning(&head, 7);
    insertAtBeginning(&head, 9);
    printList(head);
    return 0;
}
