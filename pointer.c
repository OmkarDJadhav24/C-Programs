#include<stdio.h>
int main()
{
	int no=10;
	int *pno=&no;
	printf("%d",sizeof(pno));
	printf("%d",sizeof(*pno));
}