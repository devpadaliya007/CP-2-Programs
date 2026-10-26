#include<stdio.h>
#include<stdlib.h>
void main(){
	int *p;
	p=(int *) malloc (2*sizeof(int));
	p[0]=1;
	p[1]=2;
	printf("%d",p[0]);
	printf("%d",p[1]);
	
	char *p1;
	p=(char *) malloc (2*sizeof(char));
	p[0]='a';
	p[1]='b';
	printf("%c",p[0]);
	printf("%c",p[1]);
	
	float * p2;
	p=(int *) malloc (2*sizeof(float));
	p[0]=1.5;
	p[1]=2.5;
	printf("%f",p[0]);
	printf("%f",p[1]);
	
	double * p3;
	p=(int *) malloc (2*sizeof(double));
	p[0]=12345;
	p[1]=2666;
	printf("%lf",p[0]);
	printf("%lf",p[1]);
	
}
