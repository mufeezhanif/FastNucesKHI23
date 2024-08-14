#include<stdio.h>
#include<string.h>

void main(){
	int n,i;
	printf("Enter length of array: ");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter Array: ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}	
	processArray(n,arr);
	return 0;
}
void processArray(int n,int arr[n]){
	
	printf("\nArray Sum: %d",sum(n,arr));
	printf("\nMaximum Value: %d",max(n,arr));
	printf("\nMinimum Value: %d",min(n,arr));
	

}

int sum(int n,int arr[n]){
	int sum =0;
	for(int i=0;i<n;i++){
		sum += arr[i];
	}
	return sum;
}
int min(int n,int arr[n]){
	int min = arr[0];
		for(int i=0;i<n;i++){
			if(arr[i]<min)
			min = arr[i];
	}
	return min;	
}
int max(int n,int arr[n]){
	int max=arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]>max)
			max=arr[i];
	}
	return max;
}
