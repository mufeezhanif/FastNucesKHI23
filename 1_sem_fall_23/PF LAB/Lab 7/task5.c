#include<stdio.h>
int main(){
	int i,j,n,condition=1,l;
	printf("Enter order of matrix: ");
	scanf("%d",&n);
	int arr[n][n],t_array[n][n];
//	input for array

	for(i=0;i<n;i++){
		printf("\nEnter row %d:  ",(i+1));
		for(j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	
	printf("\n\nEntered Array is given below:\n");
	for(i=0;i<n;i++){
		printf("\n row %d:  ",(i+1));
		for(j=0;j<n;j++){
			printf("%d ",arr[i][j]);
		}
	
	}
	printf("\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			arr[i][j]=t_array[j][i];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(arr[i][j]!=t_array[j][i]){
				printf("\nArray is not symmetric");
				condition=0;
				break;
			}
		}
	}
	if(condition==1){
		printf("\nArray is symmetric");
	}
	
	return 0;
}
