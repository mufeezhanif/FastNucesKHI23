#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	FILE *fptr;
	int num, marks,i;
	fptr = fopen("mufeez.txt","a");
	scanf("%d",&num);
	char name[50],roll[20];
	if(fptr== NULL){
		fclose(fptr);
		fptr= fopen("mufeez.txt","w");
		for(i=0;i<num;i++){
		printf("\nEnter Name: ");
		fflush(stdin);
		gets(name);
		printf("\nEnter Roll No: ");
		fflush(stdin);
		gets(roll);
		fflush(stdin);
		printf("\nEnter Marks: ");
		scanf("%d",&marks);
		fprintf(fptr,"\nName: %s \tRoll No: %s\tMarks: %d",name,roll,num);	
	}
	}
	else{
	for(i=0;i<num;i++){
		printf("\nEnter Name: ");
		fflush(stdin);
		gets(name);
		printf("\nEnter Roll No: ");
		fflush(stdin);
		gets(roll);
		fflush(stdin);
		printf("\nEnter Marks: ");
		scanf("%d",&marks);
		fprintf(fptr,"\nName: %s \tRoll No: %s\tMarks: %d",name,roll,num);	
	}
}
	return 0;
}