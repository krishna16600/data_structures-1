#include<stdio.h>
int main(){
	int size=0;
	int element =0;
	printf("enter the size of the array");
	scanf("%d",&size);
	int arr[size];
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the number you want to search");
	scanf("%d",&element);
	int index=0;
	for(int i=0;i<size;i++)
	{
		if(arr[i]==element)
		{
			index=i;
			break;
		}
	}
	printf("the index of the number is %d", index);
	return 0;
}

