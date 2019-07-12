#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	int arr[argc-1];
	int j=0;
	for(int i=1;i<argc;i++)
	{
		arr[j]= atoi(argv[i]);
		j++;
	}
	for(int i=sizeof(arr)-1;i>=0;i--)
		printf("%d\n",arr[i]);
	
				return 0;
}
