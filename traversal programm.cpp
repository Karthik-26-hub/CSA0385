#include<stdio.h>
#include<stdlib.h>
struct node
{
    int item;
    struct node* left;
    struct node* right;
};
void inorder(struct node* root)
{
    if(root==NULL) return;
    inorder(root->left);
    printf("%d->",root->item);
    inorder(root->right);
}
void preorder(struct node* root)
{
    if(root==NULL) return;
    printf("%d->",root->item);
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct node* root)
{
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    printf("%d->",root->item);
}
struct node* create(int value)
{
    struct node* newnode=malloc(sizeof(struct node*));
    newnode->item=value;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
struct node* insertleft(struct node* root,int value)
{
    root->left=create(value);
    return root->left;
}
struct node* insertright(struct node* root,int value)
{
    root->right=create(value);
    return(root->right);
}
int main()
{
    struct node* root=create(1);
    insertleft(root,12);
    insertright(root,9);
    insertleft(root->left,5);
    insertright(root->left,6);
    printf("inorder traversal:");
    inorder(root);
    printf("\npreorder traversal:");
    preorder(root);
    printf("\npostorder traversal:");
    postorder(root);
}
