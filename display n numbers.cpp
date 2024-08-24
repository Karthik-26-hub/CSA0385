#include<stdio.h>
int display(int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		printf("%d\n",i);
	}
}
int main()
{
	int n=10;
	display(n);
}
