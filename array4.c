//To add two 2 dimesional arrays

#include<stdio.h>
int main()
{
	int arr[3][3];
	int brr[3][3];
	int crr[3][3];
	int i=0;
	int j=0;
	int t=1;
	int k=2;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			arr[i][j]=t;
			t++;
		}
	}
	printf("Elements of arr are:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d  ",arr[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			brr[i][j]=k;
			k++;
		}
	}
	printf("\n\nElements of brr are:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d  ",brr[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			crr[i][j]=arr[i][j]+brr[i][j];
		}
	}
	printf("\n\nElements of crr are:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d  ",crr[i][j]);
		}
		printf("\n");
	}
	return 0;
}