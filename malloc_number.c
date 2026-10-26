#include<stdio.h>
#include<stdlib.h>
void main(){
	int n,*numbers;
	printf("enter n here");
	scanf("%d",&n);
	numbers=(int*)malloc(n*
	sizeof(int));
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		printf("%d element",i+1);
		scanf("%d",&numbers[i]);
		
	}
	for(i=0;i<n;i++){
		sum=sum+numbers[i];
		
	}
	printf("%d",sum);
}
