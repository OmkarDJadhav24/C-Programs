#include<stdio.h>
int main()
{
	int arr[3][3][3];
	int i=0;
	int j=0;
	int k=0;
	int t=1;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				arr[i][j][k]=t;
				t++;
			}
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				printf("%d ",arr[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
}