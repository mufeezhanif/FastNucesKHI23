#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	int ch,ch1;
	int i,count=0;
	printf("Enter character : ");
	scanf("%c",&ch);
	//extra work, creating file and entering data in the file
	FILE *fptr;
	fptr = fopen("task4.txt","w");
	fprintf(fptr,"%s","Hello world, how do you do?");
	fclose(fptr);
	fptr = fopen("task4.txt","r");
	while(!feof(fptr)){
		ch1 = fgetc(fptr);
		if(ch == ch1)
			count++;
	};
	
	printf("\nCount: %d",count);
	fclose(fptr);
	return 0;
}