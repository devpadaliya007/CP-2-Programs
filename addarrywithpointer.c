#include<stdio.h>
void add (int *a,int *b,int *c,int row,int col)
{
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			*(c+i*col+j)=*(a+i*col+j)+*(b+i*col+j);		
		}
	}
}
void main()
{
	int row,col,i,j;
	printf("Enter row and col");
	scanf("%d%d",&row,&col);
	int a[row][col],b[row][col],c[row][col];
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);		
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&b[i][j]);		
		}
	}
		int c[row][col];
		add ("&a,&b,&c,row,col");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d",c[i][j]);		
		}
		printf("\n");
	}
	
}
