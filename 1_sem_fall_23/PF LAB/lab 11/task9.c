#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Register{
	char courseid[20];
	char name[20];
};

struct student{
	char std_id[15];
	char f_name[15];
	char l_name[15];
	char cell[12];
	char email[15];
	
	struct Register reg;
};

int main(){
	int i;
	struct student std[5];
	for(i=0;i<2;i++){
		printf("\n\nFor student %d: ",i+1);
		printf("\nEnter std id: ");
		gets(std[i].std_id);
		printf("\nEnter first name: ");
		gets(std[i].f_name);
		printf("\nEnter last name: ");
		gets(std[i].l_name);
		
		fflush(stdin);
		printf("\nEnter cell no: ");
		gets(std[i].cell);
		printf("\nEnter email: ");
		fflush(stdin);
		gets(std[i].email);
		printf("\nEnter Course id: ");
		gets(std[i].reg.courseid);
		printf("\nEnter Course name: ");
		gets(std[i].reg.name);
	}
	
	for(i=0;i<2;i++){
		printf("\n\nFor student %d: ",i+1);
		printf("\nstd id: ");
		puts(std[i].std_id);
		printf("\n first name: ");
		puts(std[i].f_name);
		printf("\n last name: ");
		puts(std[i].l_name);
		printf("\n cell no: ");
		puts(std[i].cell);
		printf("\n email: ");
		puts(std[i].email);
		printf("\n Course id: ");
		puts(std[i].reg.courseid);
		printf("\n Course name: ");
		puts(std[i].reg.name);
	}
	
	
	
	return 0;
}