#include<stdio.h>
int max(int, int);
int main() 
{
    int a, b;
    printf("Enter two numbers:");
    scanf("%d %d", &a,&b);
    int ans = max(a, b);
    printf("%d is greater", ans);
}

int max(int a, int b) 
{
    if (a>b) 
	{
        return a;
    } else
	{
        return b;
    }
}