#include<stdio.h>
void towerofhanoi(int n,char fromrod,char torod,char auxrod)
{
	if(n==1)
	{
		printf("\n move desk 1 from rod %c to rod %c",fromrod,torod);
		return;
	}
	towerofhanoi(n-1,fromrod,auxrod,torod);
	{
		printf("\n move desk %d from rod %c to rod %c",n,fromrod,torod);
	}
	towerofhanoi(n-1,auxrod,torod,fromrod);
}
int main()
{
	int a;
	printf("enter the a: ");
	scanf("%d",&a);
	towerofhanoi(a,'A','C','B');
}
