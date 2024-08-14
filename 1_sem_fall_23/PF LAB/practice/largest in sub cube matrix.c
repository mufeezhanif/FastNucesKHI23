#include<stdio.h>

int main(){
	int n,i,j,k,l,max=0;
	scanf("%d",&n);
	int arr[n][n];
	int maxlocal[n-2][n-2];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<n-2;i++){
		for(j=0;j<n-2;j++){
			max=0;
			for(k=i;k<i+3;k++){
				for(l=j;l<j+3;l++){
					if(arr[k][l]>max){
						max= arr[k][l];
						maxlocal[i][j]=max;
					}					
				}
			}
		}
	}
	printf("\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf(" %d",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	for(i=0;i<n-2;i++){
		for(j=0;j<n-2;j++){
			printf("%d ",maxlocal[i][j]);
		}
		printf("\n");
	}
	return 0;
}