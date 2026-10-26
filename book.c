#include<stdio.h>
struct book{
	char title[50];
	char author[50];
	int publication;
	float price;
};
void main(){int i;
	struct book b[3];
	for(i=0;i<3;i++){
	printf("Enter Title");
	scanf("%s",b[i].title);
	fflush(stdin);
	printf("Enter Author");
	scanf("%s",b[i].author);
	printf("Enter Publication");
	scanf("%d",b[i].publication);
	printf("Enter Title");
	scanf("%d",b[i].price);
	} 
	for(i=0;i<3;i++){
		printf("%s",b[i].title);
		printf("%s",b[i].author);
		printf("%d",b[i].publication);
		printf("%d",b[i].price);
	}
}
