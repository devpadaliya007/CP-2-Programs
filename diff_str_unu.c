#include<stdio.h>
struct std


   {
	int x;
	int y;
};
union unu{
	int a;
	int b;
};
 void main()
 {
 	struct std s;
 	union unu u; 
 	
 	int size1=sizeof(s);
 	int size2=sizeof(u);
 printf("%d %d",size1,size2);	
 }
