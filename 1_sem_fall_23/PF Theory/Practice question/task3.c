#include<stdio.h>

int main(){
	int i,factorial=1,n;
	printf("Enter number: ");
	scanf("%d",&n);
	factorial =n;
	for(i=(n-1);i>0;i--){
		factorial *= i;
	}
	printf("\nFactorial of %d is %d",n,factorial);
	return 0;
}