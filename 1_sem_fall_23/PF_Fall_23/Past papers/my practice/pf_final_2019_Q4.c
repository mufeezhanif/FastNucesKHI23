#include<stdio.h>

void calculate(int *arr,int i,int n, int * even,int* odd){
	if(i==n){
		printf("\nEven: %d, Odd: %d",*even,*odd);
	}
	else{
		*odd = *odd + arr[i];
		++i;
		if(i==n){
		printf("\nEven: %d, Odd: %d",*even,*odd);
		}
		else{
			*even= *even + arr[i];
			++i;
			calculate(arr,i,n,even,odd);
			
		}
	}
}

int main(){
	int arr[6] = {1,2,3,4,5,6};
	int i=0,even=0,odd=0;
	calculate(arr,i,6,&even,&odd);
	return 0;
}