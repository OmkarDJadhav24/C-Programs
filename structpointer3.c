#include<stdio.h>
struct Demo
{
   int *ip;
   float *fp;
};

int main()
{
	struct Demo obj;
	
	int no=11;
	float f=3.10;
	
	obj.ip=&no;
	obj.fp=&f;
	
	printf("\nThe address of no:%d",obj.ip);
	printf("\nThe address of f:%d",obj.fp);
	
	printf("%d\n",*(obj.ip));
	printf("%f\n",*(obj.fp));
	return 0;
}