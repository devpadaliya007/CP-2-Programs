#include<stdio.h>
void main()
{
	int a;
	a=1;
	int *p;
	p=&a;
	
	float b;
	b=1.1;
	int *q;
	q=&b;
	
	char c;
	c='n';
	int *r;
	r=&c;
	
	double d;
	d=2984.982;
	int *s;
	s=&d;
	
	printf("\n%d",a);
	printf("\n%d",*p);
	printf("\n%p",&a);
	printf("\n%p",p);
    printf("\n");
	
	printf("\n%f",b);
	printf("\n%f",*q);
	printf("\n%p",&b);
	printf("\n%p",q);
	printf("\n");
	
	printf("\n%c",c);
	printf("\n%c",*r);
	printf("\n%p",&c);
	printf("\n%p",r);
	printf("\n");
	
	printf("\n%lf",d);
	printf("\n%lf",*s);
	printf("\n%p",&d);
	printf("\n%p",s);
	printf("\n");
}