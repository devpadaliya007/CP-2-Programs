#include<stdio.h>
#include<stdlib.h>
struct student
{
	int id;
	float spi;
};
void main()
{
	struct student *s;
	int n,i;
	printf("enter n");
	scanf("%d",&n);
	s=(struct student *) malloc(n*sizeof(struct student));
	for(i=0;i<n;i++)
	{
		printf("Enter id and spi for student%d",i+1);
		scanf("%d",&(s+i)->id);
		scanf("%f",&(s+i)->spi);	
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",(s+i)->id);
		printf("%f\n",(s+i)->spi);	
	}
}
