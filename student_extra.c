#include<stdio.h>
struct student
{
	char name[50];
	int age;
	float prcentage;
};
void main()
{
	struct student s[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("\nenter name:");
		scanf("%s",s[i].name);
		printf("\nenter age:");
		scanf("%d",&s[i].age);
		printf("\nenter percentage:");
		scanf("%f",&s[i].prcentage);
	}
	for(i=0;i<5;i++)
	{
		printf("%s",s[i].name);
		printf("%d",&s[i].age);
		printf("%f",&s[i].prcentage);
	}
}
