#include<stdio.h>
struct employee{
	char name[50];
	int id;
	float salary;
};
void main (){
	struct employee e;
	printf("Enter Name");
	scanf("%s",e.name);
	printf("Enter id");
	scanf("%d",&e.id);
	printf("Enter Salary");
	scanf("%f",&e.salary);
	
	printf("%s",e.name);
	printf(\n"%d",e.id);
	printf(\n"%f",e.salary);
}
