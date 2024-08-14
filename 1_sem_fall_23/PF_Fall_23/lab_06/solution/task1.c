#include<stdio.h>
int main(){
	int i,num,divisor1,divisor= 1,factor;
	printf("enter number: ");
	scanf("%d",&num);
	for(i=2; i<num;i++){
		if(num%i == 0)
		{
			divisor = divisor + i;
		}
		
	}
		
	(divisor == num) ? printf("This is a perfect number") : printf("This is not a perfect number"); 
	return 0;
}