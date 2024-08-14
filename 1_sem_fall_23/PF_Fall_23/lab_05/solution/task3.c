#include<stdio.h>

int main(){
	char input;
	printf("Enter input: ");
	scanf("%c",&input);
	if(input>=48 && input <=57){
		printf("input is number");
	}
	else if (input>=65 && input <=90){
		printf("input is capital alphabet");
	}
	else if(input>=97 && input <=122){
		printf("Input Character is small alphabet");
	}
	else{
		printf("Input is a special character");
	}
	
	return 0;
}