#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter %d elements",i+1);
		scanf("%d",&a[i]);
	}
	int *p;
	p=a;
	for(i=0;i<n;i++)
	{
		printf("%d\n",*(p+i));
	}
}