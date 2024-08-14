#include<stdio.h>
int swap(int a,int b){
	a = a+b;
	b = a-b;
	a = a-b;
	printf("Number 1 and Number 2 after swap: %d %d",a,b);
	
	}


void main(){
	int a,b;
	printf("Enter number1 : ");
	scanf("%d",&a);
	printf("Enter number2 : ");
	scanf("%d",&b);
	
	printf("\nNumber 1 and Number 2 before swap: %d %d\n",a,b);
	swap(a,b);
	
	
}