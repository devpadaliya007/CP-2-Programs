#include<stdio.h>
struct cricket
{
	char p_name[50];
	char t_name[50];
	int score[3];
	float avg_3match;
};

void main()
{
	struct cricket p[3];
	float avg[3];
	int i, j, total = 0;
	
	for (i = 0; i < 3; i++)
	{
		printf("Enter Details For player-%d",i+1);
		printf("\nEnter player name:");
	   	scanf("%s", p[i].p_name);
		printf("\nEnter player's Team  name:");
	   	scanf("%s", p[i].t_name);
	    
	    for (j = 0; j < 3; j++) 
		{
			printf("Enter Player's Match-%d score",j+1);
	    	scanf("%d", &p[i].score[j]);
	    	total += p[i].score[j];
   		}
   		avg[i]=total/3;
   		total=0;
   		printf("%f",avg[i]);
	}
}