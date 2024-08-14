#include<stdio.h>
#include<string.h>

struct student{
int roll_no;
char Name[50];
char Department[50];
char Course[50];
int joining_year;
};

int main(){
	int i,n,year,rollno;
	struct student data[450];
	//entering number of items to check the result of program(not required in question)
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\nEnter for student %d:",i+1);
		printf("\n\tRoll_No: ");
		scanf("%d",&data[i].roll_no);
		fflush(stdin);
		printf("\n\tName: ");
		gets(data[i].Name);
		printf("\n\tDepartment: ");
		gets(data[i].Department);
		printf("\n\tCourse: ");
		gets(data[i].Department);
		printf("\n\tJoining year: ");
		scanf("%d",&data[i].joining_year);
}

printf("\n\nEnter year: ");
scanf("%d",&year);

for(i=0;i<n;i++){
	if(data[i].joining_year==year){
		printf("\nName: ");
		puts(data[i].Name);
	}
}
printf("\n\nEnter Roll No of student: ");
scanf("%d",&rollno);

for(i=0;i<n;i++){
	if(data[i].roll_no==rollno){
		printf("\n\tName: ");
		puts(data[i].Name);
		printf("\n\tDepartment: ");
		puts(data[i].Department);
		printf("\n\tCourse: ");
		puts(data[i].Department);
		printf("\n\tJoining year: ");
		printf("%d",data[i].joining_year);
		
	}
}
return 0;
}