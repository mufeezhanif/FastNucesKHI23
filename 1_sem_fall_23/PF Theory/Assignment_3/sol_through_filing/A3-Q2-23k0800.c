#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

typedef struct {
	char name[50];
	char role[10];
	int communication;
	int teamwork;
	int creativity;
} employee;

typedef struct {
	employee emp[5];
} dep;
int main(){
	printf("23k-0800_Muhammad_Mufeez\n\n\n");
	dep arr[4];
	FILE *name = fopen("q2_names.txt","w+"); 
	char o_roles[5][30]={"Director","Executive","Manager","Employee","Trainee"};
	char dept[4][20] = {"HR","Finance","Marketing","Logistic"};
	char roles[5][30];
	int n,i=0,k,pos=0,j,index=0,max=0,total,dep_ind;
	
	while(i<4){
		j=0;
		for(k=0;k<5;k++){
			strcpy(roles[k],o_roles[k]);
		}
		while(j<5){
			srand(n+time(NULL));
			n++;
			index =rand()%20;
			rewind(name);
			fseek(name,index*)
			pos = rand()%5;
			if((strcmp(names[index],"o"))!=0 && strcmp(roles[pos],"o")!=0){
				strcpy(arr[i].emp[j].name,names[index]);
				strcpy(arr[i].emp[j].role,roles[pos]);
				
				strcpy(names[index],"o");
				strcpy(roles[pos],"o");
				index++;
				arr[i].emp[j].communication=1+rand()%100;
				arr[i].emp[j].creativity=1+rand()%100;
				arr[i].emp[j].teamwork=1+rand()%100;
				j++;
			}
			
		}
		i++;
	}
	for(i=0;i<4;i++){
		total =0;
		for(j=0;j<5;j++){
			total = total + arr[i].emp[j].communication + arr[i].emp[j].creativity + arr[i].emp[j].teamwork;
		}
		if(total > max){
			max = total;
			dep_ind = i;
		}
		printf("\nScore of %s department: %d",dept[i],total);
	}
	printf("\n\nBest Department is %s with score: %d\nFurther details are given:\n\n",dept[dep_ind],max);
	for(j=0;j<5;j++){
		printf("%s\t\t%s\t\t%d\t\t%d\t\t%d\n",arr[dep_ind].emp[j].name,arr[dep_ind].emp[j].role,arr[dep_ind].emp[j].communication,arr[dep_ind].emp[j].creativity,arr[dep_ind].emp[j].teamwork);
	}
	
	
	//not required but additional, to show the whole data
//	for(i=0;i<4;i++){
//		printf("\n\nFor department %d\n",i+1);
//		for(j=0;j<5;j++){
//			printf("%s\t\t%s\t\t%d\t\t%d\t\t%d\n",arr[i].emp[j].name,arr[i].emp[j].role,arr[i].emp[j].communication,arr[i].emp[j].creativity,arr[i].emp[j].teamwork);
//		}
//	}
	return 0;
}