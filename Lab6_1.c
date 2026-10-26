#include<stdio.h>
struct player
{
	char p_name[50];
	char team[50];
	int score;
	float average;
};
void main()
{
	struct player p[3];
	int i;
	for(i=0;i<3;i++)
	{
		printf("Enter Detail for Player-%d \n",i+1);
		printf("Enter Player Name,team,score and average:");
		scanf("%s %s %d %f",p[i].p_name,p[i].team,&p[i].score,&p[i].average);
	}
	for(i=0;i<3;i++)
	{
		printf("----------Entered Detail for Player-%d -----------\n",i+1);
		printf("Entered Player Name:%s\n team:%s\n score:%d\n average:%f\n",p[i].p_name,p[i].team,p[i].score,p[i].average);
	}
}

