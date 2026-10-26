#include<stdio.h>
void swap(int,int);
void main()
{
	int a=2,b=4;
	printf("%d%d",a,b);
	swap(a,b);
	printf("\n%d%d",a,b);
}
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("\n%d%d",a,b);
}
