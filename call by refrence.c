#include<stdio.h>
void swap(int*,int*);
void main()
{
	int a=2,b=4;
	printf("before %d%d",a,b);
	swap(&a,&b);
	printf("\nafter %d %d",a,b);
}
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("\ninfunction %d%d",*a,*b);
}
