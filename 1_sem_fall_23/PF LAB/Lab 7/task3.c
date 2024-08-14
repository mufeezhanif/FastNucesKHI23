#include<stdio.h>
int main(){
	int n,i,j=0,d;
	printf("Enter N : ");
	scanf("%d",&n);
	printf("Enter d : ");
	scanf("%d",&d);
	int arr[n];
	
	for (i=0;i<n;i++){
		printf("\n Enter element %d: ",(i+1));
		scanf("%d",&arr[i]);
	}
	for(i=(d),j=0;i<n;i++){
		temp = arr[j];
		`
		arr[j]=arr[i];
		j++;
	}
		//PRINT
		printf("\n");
	for (i=0;i<n;i++){
		printf(" %d",arr[i]);
	}
	
//	for (i=0;i<d;i++){
//		printf(" %d",arr[i]);
//	}
	
	
	return 0;
}