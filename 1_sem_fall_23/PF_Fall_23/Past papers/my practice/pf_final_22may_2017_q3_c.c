#include <stdio.h>
#include <ctype.h>
#include <string.h>

typedef struct {
	char name[50];
	int id;
	float perc;
} std;
int main(){
	int n=1;
	std *ptr;
	char ch;
	int i;
	ptr = (std *) calloc(n,sizeof(std));
	do{
		i=n-1;
		printf("\n Enter detail of student %d",n);
		printf("\nEnter name: ");
		scanf(" %s",ptr[i].name);
		printf("\nEnter roll number: ");
		scanf(" %d",&ptr[i].id);
		printf("\nEnter percentage: ");
		scanf("%f",&ptr[i].perc);
		printf("\nAdd more (y/n)");
		fflush(stdin);
		ch = getchar();
		if(ch=='y'){
			++n;
			ptr = (std *) realloc(ptr,n*sizeof(std));
		}
	}while(ch =='y');
//	int i;
	if(ch=='n'){
		printf("Entered details are: ");
		for(i=0;i<n;i++)
			printf("\n\t\t%s\t%d\t%.2f",ptr[i].name,ptr[i].id,ptr[i].perc);
	}
	free(ptr);
	return 0;
}