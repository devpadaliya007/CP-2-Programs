#include<stdio.h>
int max();
void main() 
{
    int ans = max();
    printf("%d is greater",ans);
}

int max() 
{
int a,b;
printf("Enter two no here:");
scanf("%d %d",&a,&b); 
    if (a>b) 
	{
        return a;
    } else {
        return b;
    }
}