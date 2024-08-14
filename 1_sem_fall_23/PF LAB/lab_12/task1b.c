#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	FILE *fptr;
	char name[15],roll[10];
	int num, marks,i;
	fptr = fopen("marks.txt","w");
		printf("\nEnter Name: ");
		fflush(stdin);
		gets(name);
		printf("\nEnter Roll No: ");
		fflush(stdin);
		gets(roll);
		fflush(stdin);
		printf("\nEnter Marks: ");
		scanf("%d",&marks);
//		fprintf(fptr,"%d",marks);
		fprintf(fptr,"%s\t%s\t%d",name,roll,marks);
		fclose(fptr);
		fptr= fopen("marks.txt","r");
		int length = strlen(name)+ strlen(roll);
		fseek(fptr,(length + 3),SEEK_END);
		printf("position: %d",ftell(fptr));
		int get=0;
		fscanf(fptr,"%d",&get);
//		get = fgetw(fptr);
		printf("\n%d",get);
		fclose(fptr);
	
	
	
	
//	for(i=0;i<num;i++){
//		printf("\nEnter Name: ");
//		fflush(stdin);
//		gets(name);
//	
//		printf("\nEnter Roll No: ");
//		fflush(stdin);
//		gets(roll);
//		fflush(stdin);
//		printf("\nEnter Marks: ");
//		scanf("%d",&marks);
//		fprintf(fptr,"\nName: %s \tRoll No: %s\tMarks: %d",name,roll,num);
//		
//		
//	}
	
	return 0;
}