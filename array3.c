// To Add two One Dimensional Arrays

#include<stdio.h>
int main()
{
	int arr[5];
	int brr[5];
	int crr[5];
	int i=0;
	for(i=0;i<5;i++)
	{
		arr[i]=i;
	}
	printf("\nElements of arr are:");
	for(i=0;i<5;i++)
	{
		printf("\n%d",arr[i]);
	}
	for(i=0;i<5;i++)
	{
		brr[i]=i+6;
	}
	printf("\nElements of brr are:");
	for(i=0;i<5;i++)
	{
		printf("\n%d",brr[i]);
	}
	for(i=0;i<5;i++)
	{
		crr[i]=arr[i]+brr[i];
	}
	printf("\nElements of crr are:");
	for(i=0;i<5;i++)
	{
		printf("\n%d",crr[i]);
	}
	return 0;
}