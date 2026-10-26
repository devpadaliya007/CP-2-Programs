#include<stdio.h>
struct student{
	char name;
	int id;
	float percent;
};
void main(){
	struct student s[n];
	int i;
	printf("enter n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("/nenter name:");
		scanf("%s",s[i].name);
		printf("/nenter id:");
		scanf("%d",&s[i].id);
		printf("/nenter percent:");	
		scanf("%f",&s[i].percent);
		
	}
	for(i=0;i<n;i++)
	printf("%d",s[i].id);
	printf("%d",s[i].name);
	printf("%d",s[i].percent;	
}
