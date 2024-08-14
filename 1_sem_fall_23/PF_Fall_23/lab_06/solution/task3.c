#include<stdio.h>
int main(){
	int i=1,j=1,num1,num2,lcm=1,gcd;
	printf("enter number1: ");
	scanf("%d",&num1);
	printf("enter number2: ");
	scanf("%d",&num2);
	while (i<=num1 && i<=num2){
		if(num1%i == 0 && num2%i == 0)
		{
			gcd = i;
		}
		i++;
	}
	printf("GCD of given number is : %d\n\n\n",gcd);
	
	printf("Factors of  LCM are: ");
	
	for(j=2;j<=num1 || j<=num2;j++){
		while(num1%j==0 || num2%j==0){
			lcm*=j;
			if(num1%j==0){
				num1=num1/j;
			}
			if(num2%j==0){
				num2=num2/j;
			}
			printf("%d , ",j);
		}
	}
	printf("\b\b ");
	printf("\nLcm is : %d",lcm);
	return 0;
}