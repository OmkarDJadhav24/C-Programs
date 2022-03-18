#include<stdio.h>
int main()
{
	int ivalue=11;
	char cvalue='A';
	float fvalue=10.11;
	double dvalue=20.11;
	
	void *ptr=NULL;
	printf("%d",&ptr);
	
	ptr=&ivalue;
	printf("%d\n",*(int *)ptr);
	
	ptr=NULL;
	ptr=&fvalue;
	printf("%f\n",*(float *)ptr);
	
	ptr=NULL;
	ptr=&cvalue;
	printf("%c\n",*(char *)ptr);
	
	return 0;
}