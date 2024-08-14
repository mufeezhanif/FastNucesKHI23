#include<stdio.h>

int main(){
	printf("k230800 Muhammad Mufeez \n\n");
	
	int i,j,t,shirts=0,temp=0,ret,sum=0;
	printf("Enter shirts: ");
	scanf("%d",&shirts);
	int arr[shirts];
	printf("\nEnter age and price of each shirt by putting an space in between: ");
	for(i=0;i<shirts;i++){
		scanf("%d",&arr[i]);
	}
	printf("\nSorted list in ascending order with repect to age: \n");
	for(i=0;i<shirts;i++){
		temp = arr[i];
		ret=0;
		for(j=0;j<shirts-1;j++){
			if(arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				ret=1;
			}
			
		}
		if(ret==1){
			i--;
		}
		}
		
			for(i=0;i<shirts;i++){
				printf("   %d, ",arr[i]);
	}
	return 0;	
}
