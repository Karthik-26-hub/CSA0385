#include<stdio.h>
#include<stdlib.h>
#define size 4
int top=-1,array[size];
void push();
void pop();
void show();
int main()
{
	while(1)
	{
		printf("\n perform the operation on stack: \n");
		printf("\n1.push the \n2.pop the element\n3.show the elements\n4.end");
		int choice;
		printf("\nenter the choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				show();
				break;
			case 4:
				exit(0);
		default:
				printf("invalid choice");
		}
	}
}
void push()
{
	int a;
	if(top==size-1)
	{
	   printf("\n overflow");
	}
	else
	printf("\nenter the element:");
	scanf("%d",&a);
	top=top+1;
	array[top]=a;
}
void pop()
{
	if(top==-1)
	{
		printf("\n underflow");
	}
	else
	{
		printf("the popped element: %d",array[top]);
		top=top-1;
	}
}
void show()
{
	if(top==-1)
	{
		printf("\n underflow");
	}
	else
	{
		printf("the elements in stack:");
		for(int i=top;i>=0;i--)
		{
		   printf("\n%d",array[i]);
	    }
	}
}
