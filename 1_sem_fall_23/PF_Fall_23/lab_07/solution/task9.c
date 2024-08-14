#include<stdio.h>

int main(){
	int N,i,j;
	printf("Enter Size of array : ");
	scanf("%d",&N);
	int arr[N];
	for(i=0;i<N;i++){
		printf("\nEnter Number for index %d: ",i);
		scanf("%d",&arr[i]);
	}
	
	int tmp = arr[0];
	for(i=0;i<N;i++){
		for(j=0;j<N-1;j++){
			if(arr[j]>arr[j+1]){
				tmp = arr[j];
				arr[j]= arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
	
	printf("\nAfter sorting: ");
	for(i=0;i<N;i++){
		printf("%d ",arr[i]);
	}
	
	
	
	return 0;
}