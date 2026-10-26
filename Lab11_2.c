#include<stdio.h>
void main()
{
	FILE *file;
	int charcount=0,spacecount=0,linecount=0,tabcount=0;
	char ch;
	file=fopen("dev.txt","r");
	
	while(1)
	{
		ch=fgetc(file);
		if(ch==EOF)
		{
			break;
		}
		charcount++;
		if(ch==' ')
		{
			spacecount++;
		}
		if(ch=='\n')
		{
			linecount++;
		}
		if(ch=='\t')
		{
			tabcount++;
		}
	}
	printf("charcount=%d \n",charcount);
	printf("spacecount=%d \n",spacecount);
	printf("linecount=%d \n",linecount);
	printf("tabcount=%d\n",tabcount);
}
