#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct personal{
	int id;
	char name[30];
} pe;
typedef struct department{
	int id;
	int salary;
} de;
typedef struct combine{
	int id;
	char name[30];
	int salary;
} cm;

void input(int n){
	FILE *personal = fopen("23k_0800_personal.txt","w+");	
	FILE *department = fopen("23k_0800_department.txt","w+");
	int id,salary,i;
	char name[30];
	if(department==NULL || personal==NULL){
		printf("One or both files didn't open");
		exit(1);
	}	
	printf("\n\nEnter for personal file: ");
	for(i=0;i<n;i++){
		printf("\nfor user %d:\n",i+1);
		printf("\n\tEnter Id: ");
		fflush(stdin);
		scanf("%d",&id);
		printf("\n\tEnter Name: ");
		fflush(stdin);
		gets(name);
		fprintf(personal,"%d %s\n",id,name);
	}
	
	printf("\n\nEnter for department file: ");
	for(i=0;i<n;i++){
		printf("\nfor user %d:\n",i+1);
		printf("\n\tEnter Id: ");
		scanf("%d",&id);
		printf("\n\tEnter Salary: ");
		scanf("%d",&salary);
		fprintf(department,"%d %d\n",id,salary);
	}	
	rewind(personal);
	rewind(department);
	sort(n,personal,department);

}
void sort(int n, FILE *personal,FILE *department){
	pe tmp_pe[n],per_tmp;
	de tmp_de[n],dep_tmp;
	int i,j;
	
	for(i=0;i<n;i++){
		fscanf(personal,"%d",&tmp_pe[i].id);
		fgets(tmp_pe[i].name,50,personal);
		fscanf(department,"%d",&tmp_de[i].id);
		fscanf(department,"%d",&tmp_de[i].salary);	
	}
		
	for(j=0;j<n-1;j++){
		for(i=0;i<n-1;i++){
			if(tmp_pe[i].id>tmp_pe[i+1].id){
			per_tmp = tmp_pe[i];
			tmp_pe[i]=tmp_pe[i+1];
			tmp_pe[i+1] = per_tmp;
		}
		
		if(tmp_de[i].id>tmp_de[i+1].id){
			dep_tmp = tmp_de[i];
			tmp_de[i]=tmp_de[i+1];			
			tmp_de[i+1] = dep_tmp;			
		}
	}
	}
	rewind(personal);
	rewind(department);
	
	for(i=0;i<n;i++){
		fprintf(personal,"%d %s",tmp_pe[i].id,tmp_pe[i].name);
		fprintf(department,"%d %d\n",tmp_de[i].id,tmp_de[i].salary);
	}
	
	fclose(personal);
	fclose(department);
}

void combine(int n){
	int i,j;
	struct combine arr[n];
	FILE *personal = fopen("23k_0800_personal.txt","r");
	FILE *department = fopen("23k_0800_department.txt","r");
	FILE *combine = fopen("23k_0800_combine.txt","w");
	if(department==NULL || personal==NULL || combine ==NULL){
		printf("One or both files didn't open");
		exit(1);
	}
	pe tmp_pe[n];
	de tmp_de[n];
	
	for(i=0;i<n;i++){
		fscanf(personal,"%d",&tmp_pe[i].id);
		fgets(tmp_pe[i].name,50,personal);
		fscanf(department,"%d",&tmp_de[i].id);
		fscanf(department,"%d",&tmp_de[i].salary);
		arr[i].id = tmp_pe[i].id;
		strcpy(arr[i].name,tmp_pe[i].name);
		arr[i].salary = tmp_de[i].salary;
	}
	
	for(i=0;i<n;i++){
		arr[i].name[strcspn(arr[i].name, "\n")] = '\0';
		fprintf(combine,"%d %s %d\n",arr[i].id,arr[i].name,arr[i].salary);
	}
	printf("\n\ncombined file is given below: \n");
	for(i=0;i<n;i++){
		printf("%d %s %d\n",arr[i].id,arr[i].name,arr[i].salary);
	}
	
	fclose(personal);
	fclose(department);
	fclose(combine);
	}

int main(){
	printf("23k-0800_Muhammad_Mufeez\n\n\n");
	int n,id;
	printf("Enter number of employees: ");
	scanf("%d",&n);
	input(n);
	combine(n);
	return 0;
}