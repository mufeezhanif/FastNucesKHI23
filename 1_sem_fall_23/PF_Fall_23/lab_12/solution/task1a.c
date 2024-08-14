#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	FILE *fptr;
	int num, marks,i;
	fptr = fopen("task1_a.txt","w");
	scanf("%d",&num);
	char name[20];
	
	for(i=0;i<num;i++){
		printf("\nEnter Name: ");
		fflush(stdin);
		gets(name);
		fflush(stdin);
		printf("\nEnter Marks: ");
		scanf("%d",&marks);
		fprintf(fptr,"\nName: %s \t\tMarks: %d",name,num);
		
	}
	return 0;
}