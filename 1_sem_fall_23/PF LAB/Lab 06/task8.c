#include<stdio.h>

int main(){
	int arr[9],i,sum=0;
	for (i = 0 ; i<=8;i++){
		printf("Enter Number%d: ",(i+1));
		scanf("%d",&arr[i]);
		sum += arr[i];
		
	}
	printf("\nReversed Array is: ");
	for(i=8;i>=0;i--){
		printf("%d, ",arr[i]);
	}
	return 0;
}