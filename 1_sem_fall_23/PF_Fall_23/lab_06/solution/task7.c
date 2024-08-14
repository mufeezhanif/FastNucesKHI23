#include<stdio.h>

int main(){
	int arr[9],i,sum=0;
	for (i = 0 ; i<=8;i++){
		printf("Enter Number%d: ",(i+1));
		scanf("%d",&arr[i]);
		sum += arr[i];
		
	}
	printf("\nArray is: ");
	for(i=0;i<=8;i++){
		printf("%d, ",arr[i]);
	}
	printf("\b\b ");
	printf("\nsum is: %d",sum);
	return 0;
}