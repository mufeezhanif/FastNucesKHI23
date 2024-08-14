#include<stdio.h>

int main(){
	char operation;
	int num1,num2;
	printf("Enter Number 1: ");
	scanf("%d",&num1);
	printf("Enter Number 2: ");
	scanf("%d",&num2);
	printf("\nEnter operation you want to perform: ");
	scanf("\n%c",&operation);
	switch(operation)
	{	
		case '+':
			printf("Sum of numbers is %d",(num1 + num2));
			break;
			
		case '-':
			printf("subtraction of numbers is: %d",(num1 - num2));
			break;
			
		case '*':
			printf("multiplications of numbers is : %d",(num1*num2));
			break;
			
		case '/':
			printf("Division of numbers is: %d",(num1 / num2));
			break;
			
		default:
			printf("Enter Correct operation");
	}
	return 0;
}