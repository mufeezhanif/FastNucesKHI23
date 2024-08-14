#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct employee{
	int employee_id;
	char name[50];
	int salary;
};
struct organisation{
	char org_name[37];
	char org_number[23];
	struct employee emp;
	
	
};

int main(){
	struct organisation org;
	strcpy(org.org_name,"NU-Fast");
	strcpy(org.org_number,"NUFAST123ABC");
	org.emp.employee_id=127;
	strcpy(org.emp.name,"Linus Sebastian");
	org.emp.salary=400000;
	
	printf("\nThe size of structure organisation : %d",sizeof(org));
	printf("\nOrganisation Name : %s",org.org_name);
	printf("\nOrganisation Number : %s",org.org_number);
	printf("\nEmployee id : %d",org.emp.employee_id);
	printf("\nEmployee name : %s",org.emp.name);
	printf("\nEmployee Salary : %d",org.emp.salary);
	
	
	
	
	return 0;
}