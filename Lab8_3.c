#include<stdio.h>
void add(int *a,int *b,int *c,int row,int col)
{
	int i,j,n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			*(c+i*col+j)=*(a+i*col+j)+*(b+i*col+j);	
		}
		void main()
		{
			int row,col,i,j;
			scanf("%d %d",&row,&col);
			int a[row][col],b[col][row];
			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
				{
					scanf("%d",&a[i][j]);
				}
			}
			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
				{
					scanf("%d",&b[i][j]);
				}
			}
			int c[row][col];
			add(&a,&b,&c,row,col);
			for(i=0;i<n;i++)
			{
			 for(j=0;j<n;j++)
				{
				 printf("%d",c[i][j]);
					
				}	
			}	
		}	
	}
}