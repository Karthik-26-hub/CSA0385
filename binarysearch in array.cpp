#include<stdio.h>
int binarysearch(int a[],int low,int high,int ele)
{
	while(low<=high)
	{
	   int mid=low+(high-low)/2;
	   if(a[mid]==ele)
	   {
	   	return mid+1;        
	   }	
	   if(a[mid]<ele)
	   {
	   	low=mid+1;
	   }
	   else
	   {
	   	high=mid-1;
	   }
	}
	return -1;
}
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int ele=6;
	int n=10;
	int result=binarysearch(a,0,n-1,ele);
	if(result!=-1)
	{
		printf("%d is at index of %d",ele,result);
	}
	else
	{
		printf("%d is not exists",ele);
	}
}
