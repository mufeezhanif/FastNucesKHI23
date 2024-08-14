#include<stdio.h>

void main(){
	int a,b;
	char c;
	printf("Enter two numbers with a space between them: ");
	scanf("%d %d",&a,&b);
	fflush(stdin);
	printf("\nEnter operator : ");
	scanf("%c",&c);
	function(a,b,c);
	
}
void function(int x,int y,char operator){
	switch(operator){
		case '+':{
			printf("Sum: %d",(x+y));
			break;
		}
		case '-':{
			printf("Subtraction: %d",(x-y));
			break;
		}
		case '*':{
			printf("Multiplication: %d",(x*y));
			break;
		}
		case '/':{
			printf("Division: %d",(x/y));
			break;
		}
}}