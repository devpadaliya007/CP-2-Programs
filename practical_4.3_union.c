#include<stdio.h>
union student
{
	char name[30];
	int rollno;
	float SPI;
};
void main()
{
	union student s;
	printf("Enter Name:");
	scanf("%s",s.name);
	printf("Name:%s\n",s.name);
	
	printf("Enter Roll no:");
	scanf("%d",&s.rollno);
	printf("Name:%d\n",s.rollno);
	
	printf("Enter SPI:");
	scanf("%f",&s.SPI);
	printf("Name:%f\n",s.SPI);
	printf("%d",sizeof(s));
}
