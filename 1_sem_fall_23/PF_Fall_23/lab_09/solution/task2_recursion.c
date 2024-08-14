#include<stdio.h>

int multiply(int num1,int num2,int i){  
 	if (num2==1)  
   		 return num1;  
 	else if(i!=num2){
    	i++;
    	num1 = num1+num1;
		multiply(num1,num2,i);
	}  
	else{
		return num1;
	}
}  

void main(){
	int num1,num2,multiple;
	scanf("%d",&num1);
	scanf(" %d",&num2);
	int i=1;	
	if(num1>num2)
		multiple=  multiply(num1,num2,i);
	else if(num2>num1)
		multiple=  multiply(num2,num1,i);
	
	printf("\nMultiple: %d",multiple);
}