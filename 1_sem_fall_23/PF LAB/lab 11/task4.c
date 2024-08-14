#include<stdio.h>
#include<string.h>

struct employee{
char Name[50];
int salary;
int hours_per_day;
}date1,date2;

int main(){
	int n,i;
	struct employee data[10];
	//entering number of items to check the result of program(not required in question)
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\nEnter for employee %d:",i+1);
		printf("\n\tName: ");
		fflush(stdin);
		gets(data[i].Name);
		fflush(stdin);
		printf("\n\tSalary: ");
		scanf("%d",&data[i].salary);
		printf("\n\tHours per day: ");
		scanf("%d",&data[i].hours_per_day);
}


for(i=0;i<n;i++){
	if(data[i].hours_per_day>=12){
		data[i].salary += 150;	
	}
	else if(data[i].hours_per_day>=10){
		data[i].salary += 100;	
	}
	else if(data[i].hours_per_day>=8){
		data[i].salary += 50;	
	}
}
for(i=0;i<n;i++){
		printf("\n\n\tName: ");
		puts(data[i].Name);
		printf("\n\n\tHours Per day: ");
		printf("%d",data[i].hours_per_day);
		printf("\n\n\tSalary: ");
		printf("%d",data[i].salary);
		
	}

return 0;
}