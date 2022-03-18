#include<stdio.h>
#define MAX 100

int main()
{
	int no=10;
	no=no+MAX;
	
	printf("\nHello");
	printf("\nValue of no is:%d",no);
	
	return 0;
	
}

//gcc preprocessor.c -0 Myexe -save -temp