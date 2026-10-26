#include<stdio.h>
struct student{
	int id;
	char name[50];
	float percent;
};
void main()
{
	int i,n;
	printf("Enter n:");
	scanf("%d",&n);
	struct student s[n];
	for(i=0;i<n;i++)
	{
		printf("Enter id:");
		scanf("%d",&s[i].id);
		printf("Enter name:");
		scanf("%s",&s[i].name);
		printf("Enter percent:");
		scanf("%f",&s[i].percent);
	}
	int max=0;
	for(i=1;i<n;i++){
		if(s[max].percent<s[1].percent)
		{
			max=i;
		}
	}
}
