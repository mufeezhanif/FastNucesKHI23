#include<stdio.h>

int main(){
	int arr[9],i,max,min;
	for (i = 0 ; i<=8;i++){
		printf("Enter Number%d: ",(i+1));
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	min=arr[0];
	
	for(i=8;i<=arr;i--){
		if(arr[i]<min){
			min = arr[i];
		}
		else if(arr[i]>max){
			max = arr[i];
		}
	}
	
	printf("\nMinimum Number: %d",min);
	printf("\nMaximum Number: %d",max);
	
	return 0;
}