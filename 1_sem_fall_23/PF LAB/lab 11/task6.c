#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct date{
	int day;
	int month;
	int year;
};

int main(){
	int i;
	struct date dt;
	scanf("%d",&dt.day);
	scanf("%d",&dt.month);
	scanf("%d",&dt.year);
	
	//th_days and months are the threshold of a month or a year
	int th_days=30,th_month=12;
	if(dt.month!=2 || dt.month!=4 || dt.month!=6 || dt.month!=9 || dt.month!=11){
		th_days=31;
	}  
	if(dt.month == 2){
		if(dt.year%4==0)
			th_days=29;
		else{
			th_days=28;
		}
	}      
	for(i=1;i<46;i++){
		if(dt.day==th_days){
			dt.day=0;
			if(dt.month == th_month){
				dt.month=1;
				dt.year += 1;
				if(dt.month!=2 || dt.month!=4 || dt.month!=6 || dt.month!=9 || dt.month!=11){
					th_days=31;
				}  
				if(dt.month == 2){
					if(dt.year%4==0)
						th_days=29;
					else{
						th_days=28;
					}
				} 
			}
			else{
				dt.month += 1;
				if(dt.month!=2 || dt.month!=4 || dt.month!=6 || dt.month!=9 || dt.month!=11){
					th_days=31;
				}  
				if(dt.month == 2){
					if(dt.year%4==0)
						th_days=29;
					else{
						th_days=28;
					}
				} 
			}
		}
		dt.day +=1;
	}
	
	printf("Updated date is given below:\n");
	printf("%d/%d/%d",dt.day,dt.month,dt.year);
	
	
	return 0;
}