#include<stdio.h>

int main(){
	printf("k230800 Muhammad Mufeez \n\n");
	
	int i,j,t,n;
	printf("Enter length of array: "); //input for length of array
	scanf("%d",&n);
	printf("Enter sum: "); //input for t
	scanf("%d",&t);
	int arr[n];
	printf("\nEnter array: "); // to input the array
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	// printing the pairs
	printf("\nPairs: ");
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if((arr[i] + arr[j])==t){
				printf("(%d, %d)",arr[i],arr[j]);
				printf(", ");
				break;
			}
		}
	
	}
	printf("\b\b ");
	return 0;	
}
