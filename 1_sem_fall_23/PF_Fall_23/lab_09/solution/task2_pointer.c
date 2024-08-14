#include<stdio.h>

void reverse(int *arr,int size){
	int i,j,temp;
	for(i=0,j=size-1;i<j;i++,j--){
		temp = arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
	printf("\nAfter : ");
		for(i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
}

int main(){
	int arr[10];
	int i;
	for(i=0;i<10;i++){
		scanf("%d ",&arr[i]);
	}
	printf("\nBefore:");
	for(i=0;i<10;i++){
		printf(" %d",arr[i]);
	}
	reverse(arr,10);
}


