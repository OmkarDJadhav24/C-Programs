//To print Elements of Array

#include<stdio.h>
int main()
{
	int i=0;
	char arr[5]={'A','B','C','D','E'};
	
	printf("Address of arr is:%d",arr);
	
	printf("\n\nElements of Array:");
	for(i=0;i<5;i++)
	{
		printf("\n\nElement is:%c",arr[i]);
		printf("\nAddress of Element is:%d",&arr[i]);
	}
	return 0;
}