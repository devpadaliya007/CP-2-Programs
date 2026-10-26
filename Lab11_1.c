#include <stdio.h>
void main()
{
	FILE *ptr;
	ptr=fopen("dev.txt","w");
	fclose(ptr);
}
