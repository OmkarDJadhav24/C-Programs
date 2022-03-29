#include<stdio.h>
int main()
{
	int icnt=0;
	int Arr[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	for(i=0;i<=27;i++)
	{
		icnt=icnt+1;
		for(int j=0;j<=27;j++)
		{
			if(icnt==1)
			{
				printf("\n",Arr[i]);
			}
			else if(icnt>1)
			{
				for(int k=0;k<=j;k++)
				{
					if(icnt<=1)
					{
						printf(Arr[k]);
						Arr[k]=Arr[k+1];
					}
					icnt=icnt+1;
				}
			}
			
		}
	}
	return 0;
}