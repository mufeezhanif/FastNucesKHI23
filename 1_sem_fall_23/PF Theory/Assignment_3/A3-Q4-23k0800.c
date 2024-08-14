#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

typedef struct {
	int w_id;
	char f_name[50];
	char l_name[10];
	int salary;
	char date[25];
	char dept[15];
} work;

typedef struct {
	int w_id;
	char date[25];
	int bonus;
} bonus;

typedef struct {
	int w_id;
	char dept[15];
	char date[25];
	
} title;

int main(){
	printf("23k-0800_Muhammad_Mufeez\n\n\n");
	int i,hr_high=0,admin_high=0,acc_high=0,hr_ind,admin_ind,acc_ind,total_hr=0,total_admin=0,total_account=0;
	work work_data[8];
	bonus bonus_data[5];
	title title_data[8];
	FILE *fptr = fopen("23k_0800_q4.txt","r");
	if(fptr==NULL){
		printf("File didn't open");
		exit(1);
	}
	for(i=0;i<8;i++){
		fscanf(fptr,"%d %s %s %d %s %s",&work_data[i].w_id,work_data[i].f_name,work_data[i].l_name,&work_data[i].salary,work_data[i].date,work_data[i].dept);
	}
	for(i=0;i<5;i++){
		fscanf(fptr,"%d %s %d",&bonus_data[i].w_id,bonus_data[i].date,&bonus_data[i].bonus);
	}
	for(i=0;i<8;i++){
		fscanf(fptr,"%d %s %s",&title_data[i].w_id,title_data[i].dept,title_data[i].date);
	}
	
	fclose(fptr);
	
	
	for(i=0;i<8;i++){
		if(strcmp(work_data[i].dept,"HR")==0){
			if(work_data[i].salary>hr_high){
				hr_high = work_data[i].salary;
				hr_ind = i;
				total_hr += work_data[i].salary;
			}else
				total_hr += work_data[i].salary;
		}
		if(strcmp(work_data[i].dept,"Admin")==0){
			if(work_data[i].salary>admin_high){
				admin_high = work_data[i].salary;
				admin_ind = i;
				total_admin += work_data[i].salary;
			}else
				total_admin += work_data[i].salary;
		}
		if(strcmp(work_data[i].dept,"Account")==0){
			if(work_data[i].salary>acc_high){
				acc_high = work_data[i].salary;
				acc_ind = i;
				total_account += work_data[i].salary;
			}else
				total_account += work_data[i].salary;
		}
	}
	
	printf("\n\n\tREQUIRED OUTPUTS ARE GIVEN: ");
	printf("\n\t%d\t%s\t%s\t%d\t%s\t%s\n",work_data[hr_ind].w_id,work_data[hr_ind].f_name,work_data[hr_ind].l_name,hr_high,work_data[hr_ind].date,work_data[hr_ind].dept);
	printf("\t%d\t%s\t%s\t%d\t%s\t%s\n",work_data[admin_ind].w_id,work_data[admin_ind].f_name,work_data[admin_ind].l_name,admin_high,work_data[admin_ind].date,work_data[admin_ind].dept);
	printf("\t%d\t%s\t%s\t%d\t%s\t%s\n",work_data[acc_ind].w_id,work_data[acc_ind].f_name,work_data[acc_ind].l_name,acc_high,work_data[acc_ind].date,work_data[acc_ind].dept);
	
	printf("\n\tHR - %d",total_hr);
	printf("\n\tAdmin - %d",total_admin);
	printf("\n\tAccount - %d",total_account);
	
	
//	to see the fetched data from file, kindly uncomment the code below
//	printf("\n\nExtraneous to show the data of files: \n\n");
//	for(i=0;i<8;i++){
//		printf("%d\t%s\t%s\t%d\t%s\t%s\n",work_data[i].w_id,work_data[i].f_name,work_data[i].l_name,work_data[i].salary,work_data[i].date,work_data[i].dept);
//	}
//	printf("\n\n");
//	for(i=0;i<5;i++){
//		printf("%d\t%s\t%d\n",bonus_data[i].w_id,bonus_data[i].date,bonus_data[i].bonus);
//	}
//	printf("\n\n");
//	for(i=0;i<8;i++){
//		printf("%d\t%s\t%s\n",title_data[i].w_id,title_data[i].dept,title_data[i].date);
//	}
	
	
	return 0;
}