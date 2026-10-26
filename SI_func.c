#include<stdio.h>
int si(int p,int r,int n);
int main()
{
    int p,r,n,si;
    printf("Enter the 3 value here:");
    scanf("%d%d%d",&p,&r,&n);  
    si=(p*r*n)/100;   
    printf("answer %d",si);
}
	int si(int p,int r,int n)
{
	int i;
	i=(p*r*n)/100;
	return i;
}
