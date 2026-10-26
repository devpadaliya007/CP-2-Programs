#include<stdio.h>
void main()
{
	FILE *file;
	file=fopen("dev.txt","w");
	fprintf(file,"%d %d",100,200);
	fclose(file);
	
	file=fopen("dev.txt","r");
	int a,b;
	fscanf(file,"%d %d",&a,&b);
	printf("%d %d",a,b);
	fclose(file);
	
	file=fopen("dev.txt","a");
	fputc('\n',file);
	fputc('B',file);
	fclose(file);
	
	char c;
	file=fopen("dev.txt","a");
	c=fgetc(file);
	printf("%c",c);
	fclose(file);
	
	file=fopen("dev.txt","a");
	printf("Data After Seek");
	fseek(file,0,SEEK_SET);
	while((c=fgetc(file))!=EOF)
	{
		printf("%c",c);
	}
	fclose(file);
	
	file=fopen("dev.txt","r");
	printf("Data After rewind");
	rewind(file);
	while((c=fgetc(file))!=EOF)
	{
		printf("%c",c);
	}
	fclose(file);
	
}
