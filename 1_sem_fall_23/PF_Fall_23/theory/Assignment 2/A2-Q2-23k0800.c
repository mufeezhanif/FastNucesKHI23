#include<stdio.h>

int main(){
	printf("k230800 Muhammad Mufeez \n\n");
	//incomplete
	
	int m,n;
	int cols=0,rows=0,ri=0,ci=0,i,j;
	int arr1[100][100];
	int arr[100][100];
	
	printf("\nEnter number of rows and columns with a space between: ");
	scanf("%d %d",&m,&n);
	
	for(i=0;i<m;i++){
		printf("\nRow %d",(i+1));
		for(j=0;j<n;j++){
			scanf(" %d",&arr[i][j]);
		}
	}
	for (i=0; i<m; i++)
		arr1[i][0] = arr[i][0];

	for (j=0; j<n; j++)
		arr1[0][j] = arr[0][j];
	
	for (i=1; i<m; i++) {
		for (j=1; j<n; j++) {
			if (arr[i][j] == 1){
				int min = arr1[i][j - 1];
				if(arr1[i-1][j]<min)
					min= arr1[i-1][j];
				if(arr1[i-1][j-1]<min)
					min = arr1[i-1][j-1];
			
				arr[i][j] = min + 1;
			}
			else
				arr1[i][j] = 0;
		}
	}
	

	return 0;	
}
