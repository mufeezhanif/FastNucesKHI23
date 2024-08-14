#include<stdio.h>
#include<string.h>

struct date{
	char day[15];
	char month[15]; 
	int year;
};


int main(){
	struct date date1, date2;
	puts("For date 1");
	fflush(stdin);
	printf("\nEnter day: ");
	fflush(stdin);
	gets(date1.day);
	printf("\nEnter month: ");
	fflush(stdin);
	gets(date1.month);
	printf("\nEnter year: ");
	scanf("%d",&date1.year);
	
	puts("\nFor date 2");
	printf("\nEnter day: ");
	fflush(stdin);
	gets(date2.day);
	printf("\nEnter month: ");
	fflush(stdin);
	gets(date2.month);
	printf("\nEnter year: ");
	scanf("%d",&date2.year);
	
	puts("\n");
	
	if((strcmp(date1.day,date2.day)==0)&& (strcmp(date1.month,date2.month)==0)&& date1.year == date2.year){
		puts("Dates are equal");
	}
	else{
		puts("Dates are not equal");
	}
	

return 0;
}