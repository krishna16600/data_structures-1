
#include<stdio.h>
int findIndex(int arr[],int s,int e,int elem)
{
	while(s<=e)
	{
		int mid=(s+e)/2;
		if(elem==arr[mid])
			return mid;
		else if(elem>arr[mid])
			s=mid+1;
		else
			e=mid-1;
	}
	return -1;
}
int main()
{
	int size=0;
	printf("enter the size of the array");
	scanf("%d",&size);
	printf("enter the elements of the array");
	int arr[size];
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	int el=0;
	printf("enter the element you want to search");
	scanf("%d",&el);
	int start=0;
	int end=size-1;
	int ans=findIndex(arr,start,end,el);
	if(ans==-1)
		printf("the index is not present in the array");
	else
		printf("number is present at index %d",ans);
	return 0;
}
