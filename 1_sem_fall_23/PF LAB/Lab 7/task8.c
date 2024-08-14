#include<stdio.h>

int main(){
	int i,j;
	int matrix1[2][2],matrix2[2][2],result[2][2];
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\nEnter row %d column %d: ",i+1,j+1);
			scanf("%d",&matrix1[i][j]);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\nEnter row %d column %d: ",i+1,j+1);
			scanf("%d",&matrix2[i][j]);
		}
	}
	
	result[0][0]= (matrix1[0][0] * matrix2[0][0]) + (matrix1[0][1] * matrix2[1][0]);
	result[0][1]= (matrix1[0][0] * matrix2[0][1]) + (matrix1[0][1] * matrix2[1][1]);
	result[1][0]= (matrix1[1][0] * matrix2[0][0]) + (matrix1[1][1] * matrix2[1][0]);
	result[1][1]= (matrix1[1][0] * matrix2[0][1]) + (matrix1[1][1] * matrix2[1][1]);
	
	printf("\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ",result[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}