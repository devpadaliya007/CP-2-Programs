#include<stdio.h>
 int sum(int,int);
 void main()
 {
 	int a,b;
 	printf("Enter 2 no");
 	scanf("%d %d",&a,&b);
 	int ans=sum(a,b);
 	printf("%d",ans);
 }
 int sum(int a,int b)
 {
 	int addition=a+b;
 	return addition;
 }
