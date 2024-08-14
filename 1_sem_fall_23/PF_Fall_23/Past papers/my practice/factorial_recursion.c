#include<stdio.h>

long long int factorial(int n){
	if(n==1 || n==0)
		return 1;
	else
		return n* factorial(n-1);
}

int main(){
	int n;
	scanf("%d",&n);
	long long int fact = factorial(n);
	printf("\n%lld",fact);
	return 0;
}