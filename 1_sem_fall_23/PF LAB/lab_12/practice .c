#include<stdio.h>

int main(){
	FILE *fptr= fopen("practice.txt","r");
	char ch = getc(fptr);
	
//	while(ch!=EOF){
		putchar(ch);
		ch = getc(fptr);
		
//	}
	if(feof(fptr)){
		printf("\nEnd");
	}
	else
		printf("\nwent wrong");
	
	fclose(fptr);
	getchar();
	return 0;
}