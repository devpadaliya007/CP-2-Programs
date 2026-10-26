#include<stdio.h>
void main()
{
	int a=1;
	int *p;
	p=&a;
	printf("\n value of a:%d",a);
	printf("\n value of a:%u",p);
	printf("\n value of a:%d",*p);
	printf("\n value of a:%u",&a);
}
