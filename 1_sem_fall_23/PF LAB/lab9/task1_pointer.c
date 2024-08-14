#include<stdio.h>

void swap(int *a,int *b){
		int tmp =*a;
		*a = *b;
		*b = tmp;
}

int main(){
	int j=2,k=5;
	printf("j= %d, k=%d",j,k);
	swap(&j,&k);
	printf("\nj=%d, k=%d",j,k);
	return 0;
}


//A: there is an logical error in line 6 of the given program, b should be assigned
//the value of a by using tmp variable. In line 4 tmp has the value of a, and in the
//next line value of a has been changed to the value of b, so in order to assign value of 
//a to variable b, line 6 should be b=tmp
