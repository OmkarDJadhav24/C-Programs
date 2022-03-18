//To print elements of array 

#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5};
	int i=0;
	
	printf("Address of array is:%d",arr);
	
	printf("\n\nElements in Array are:");
	for(i=0;i<5;i++)
	{
		printf("\nAddress of Element:%d",&arr[i]);
		printf("\nElement is:%d\n",arr[i]);
	}
	return 0;
}