#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int pos=2,ele=7;
	int i;
	int n=5;
	for(i=n;i>pos;i--)
	{
		a[i]=a[i-1];
	}
	a[pos]=ele;
	n++;
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
