#include<stdio.h>
struct Demo
{
	
	int i;
	//float f;
	double d;
};

int main()
{
	struct Demo obj;
	printf("Size of obj is:%d",sizeof(obj));
}