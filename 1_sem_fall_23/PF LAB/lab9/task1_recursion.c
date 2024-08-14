#include<stdio.h>

int factorial(int num){  
  if (num == 0)  
    return 1;  
  else  
    return(num * factorial(num-1));  
}  

void main(){
	int N;
	scanf("%d",&N);	
	int factor=  factorial(N);
	printf("\nFactorial: %d",factor);
}