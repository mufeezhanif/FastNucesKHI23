#include<stdio.h>

void sum(int a,int b,int *ptr){
	if(a==b){
		*ptr += a;
	}
	else{
		*ptr +=a;
		sum(a+1,b,ptr);
	}
}

int main(){
	int total=0;
	sum(1,5,&total);
	printf("%d",total);
	return 0;
}