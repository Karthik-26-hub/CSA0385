#include<stdio.h>
void bubblesort(int a[],int n)
{
	int i,temp,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
void print(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
	    printf("%d ",a[i]);
	}
}
int main()
{
	int a[]={3,2,5,4,1};
	int size=5;
	bubblesort(a,size);
	printf("sorted array: \n");
	print(a,size);
}
