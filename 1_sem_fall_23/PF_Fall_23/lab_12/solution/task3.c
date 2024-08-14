#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define size 2
struct std{
	char name[25];
	char roll[10];
};

int main(){
	struct std arr[size];
	int i;
	FILE *fptr;
	fptr = fopen("task3.bin","wb");
	for(i=0;i<size;i++){
		fflush(stdin);
		printf("\nEnter name: ");
		gets(arr[i].name);
		fflush(stdin);
		printf("\nEnter roll: ");
		gets(arr[i].roll);
		fwrite(&arr[i],sizeof(struct std),1,fptr);	
	}
	fclose(fptr);
	fptr = fopen("task3.bin","rb");
	for(i=0;i<size;i++){
		printf("\nFor student %d",i+1);	
		fread(&arr[i],sizeof(struct std),1,fptr);
		printf("\nname: %s\t\tRoll No: %s",arr[i].name,arr[i].roll);
	}
	fclose(fptr);
	return 0;
}