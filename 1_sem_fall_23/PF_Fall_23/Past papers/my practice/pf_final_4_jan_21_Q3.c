#include<stdio.h>
#include<string.h>

typedef struct{
	char id[14];
	char name[50];
	int age;
	char contact[12];
}p_d;

typedef struct{
	int seat_n;
	char bus_name[25];
	int price;
	char d_city[20];
	p_d pd;
}td;

void calculate_bill(td tick_d[],int n){
	int total =0;
	for(int i=0;i<5;++i){
		total += tick_d->price;
	}
	if(total>=50000){
		total = total *7/10;
		
	}
	else if(total>=25000){
		total = total *8/10;
		
	}
	else if(total >=10000){
		total = total *9/10;
	}
	printf("\n\ttotal : %d",total);
	
}
int main(){
	td tick_det[5];
	char city[20];
	fflush(stdin);
	gets(city);	
	
	char bname[25];
	fflush(stdin);
	gets(bname);
	for(int i=0;i<5;++i){
		printf("\nFor person %d",i+1);
		strcpy(tick_det[i].bus_name,bname);
		strcpy(tick_det[i].d_city,city);
		printf("\n\tEnter name: ");
		fflush(stdin);
		gets(tick_det[i].pd.name);
		printf("\n\tEnter nic: ");
		fflush(stdin);
		gets(tick_det[i].pd.id);
		printf("\n\tEnter contact: ");
		fflush(stdin);
		gets(tick_det[i].pd.contact);
		printf("\n\tEnter age: ");
		fflush(stdin);
		scanf("%d",&tick_det[i].pd.age);
		printf("\n\tEnter seat number: ");
		fflush(stdin);
		scanf("%d",&tick_det[i].seat_n);
		if(tick_det[i].pd.age<15 || tick_det[i].pd.age>60){
			tick_det[i].price = 4500;
		}
		else{
			tick_det[i].price = 7000;
		}
	}	
	
	calculate_bill(tick_det,5);
	return 0;
}