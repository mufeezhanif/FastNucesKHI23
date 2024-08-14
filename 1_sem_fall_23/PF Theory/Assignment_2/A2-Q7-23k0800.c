#include<stdio.h>

int main(){
	printf("k230800 Muhammad Mufeez \n\n");
	
	int i,j,shirts=0,temp=0,temp1=0,ret;
	printf("Enter no of shirts: ");	//input for number of shirts
	scanf("%d",&shirts);
	int arr[shirts][2];
	printf("\nEnter age and price of each shirt by putting an space in between: "); // input for array
	for(i=0;i<shirts;i++){
		printf("\nFor Shirt %d: ",(i+1));
		for(j=0;j<2;j++)
			scanf("%d",&arr[i][j]);
	}
	
	// sorting in ascending order wrt age
	for(i=0;i<shirts;i++){
		ret=0;
		for(j=0;j<shirts-1;j++){
			if(arr[j][0]>arr[j+1][0]){
				temp = arr[j][0];
				temp1= arr[j][1];
				arr[j][0]=arr[j+1][0];
				arr[j][1]=arr[j+1][1];
				arr[j+1][0]=temp;
				arr[j+1][1]=temp1;
				ret=1;
			}
			
		}
		if(ret==1)
			i--;
	}
	// printing array in ascending order wrt age
		printf("\n\nSorted list in ascending order with repect to age: \n");
		for(i=0;i<shirts;i++){
			for(j=0;j<2;j++)
				printf(" %d",arr[i][j]);
			printf("\n");
		}
		// sordting in descending order with respect to price
	for(i=0;i<shirts;i++){
		ret=0;
		for(j=0;j<shirts-1;j++){
			if(arr[j][1]<arr[j+1][1]){
				temp = arr[j][1];
				temp1= arr[j][0];
				arr[j][1]=arr[j+1][1];
				arr[j][0]=arr[j+1][0];
				arr[j+1][1]=temp;
				arr[j+1][0]=temp1;
				ret=1;
			}
		}
		if(ret==1)
			i--;
	}
		// printing array in descending order wrt price
		printf("\n\nSorted list in descending order with repect to price: \n");
	for(i=0;i<shirts;i++){
		for(j=0;j<2;j++)
			printf(" %d",arr[i][j]);
		printf("\n");
		}
	return 0;	
}
