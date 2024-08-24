#include<stdio.h>
int search(int a[],int ele,int n)
{
int i;
  for(i=0;i<n;i++)
	{
		if(a[i]==ele)
		{
			return i+1;
		}
	}
		return -1;
	}
int main()
{
	int a[10]={10,20,50,40,80,60,70,30,90,100};
	int ele=80;
	int n=10;
	int result=search(a,ele,n);
	if(result!=-1)
	{
		printf("%d found at index of %d",ele,result);
	}
	else
	{
	printf("%d is not found",ele);
    }
}
