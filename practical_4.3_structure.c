#include<stdio.h>
struct student
{
	char name[30];
	int rollno;
	float SPI;
};
void main()
{
	struct student s;
	printf("Enetr name,roll no,and SPI:");
	scanf("%s",s.name);
	scanf("%d",&s.rollno);
	scanf("%f",&s.SPI);
	printf("%s\n",s.name);
	printf("%d\n",s.rollno);
	printf("%f\n",s.SPI);
	printf("%d",sizeof(s));
}
