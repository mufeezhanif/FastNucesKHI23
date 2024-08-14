#include<stdio.h>
int main(){
	int arr[5][5],i,j,rowsum,colsum;
//	input for array

	for(i=0;i<5;i++){
		printf("\nEnter row %d:  ",(i+1));
		for(j=0;j<5;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("\n\nEntered Array is given below:\n");
	for(i=0;i<5;i++){
		printf("\n row %d:  ",(i+1));
		for(j=0;j<5;j++){
			printf("%d ",arr[i][j]);
		}
	
	}
	printf("\n");
	printf("\n\nRow total:\t\t");
	
	for(i=0;i<5;i++){
		rowsum=0;
		colsum =0;
		for(j=0;j<5;j++){
			rowsum += arr[i][j];	
		}
		printf("%d ",rowsum);	
	}
	printf("\nColumn total:\t\t");
	for(i=0;i<5;i++){
		colsum =0;
		for(j=0;j<5;j++){
			colsum += arr[j][i];
		}
		printf("%d ",colsum);
		
	}
	return 0;
}