#include<stdio.h>
void selectionsort(int a[],int n)
{
	int i,j,temp,min;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		temp=a[min];
		a[min]=a[i];
		a[i]=temp;
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
	int a[]={3,1,6,5,4,2,9,7,8};
	int size=sizeof(a)/sizeof(a[0]);
    selectionsort(a,size);
	printf("sorted array: \n");
	print(a,size);
}
