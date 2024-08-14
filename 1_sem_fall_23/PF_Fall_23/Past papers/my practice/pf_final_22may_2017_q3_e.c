#include<stdio.h>

int main(){
	int arr[5][5];
	int i,j,zero=0;
	for(i=0;i<5;++i){
		for(j=0;j<5;++j){
			scanf("%d",&arr[i][j]);
			if(arr[i][j]==0)
				++zero;
		}
	}
	if(zero>25-zero)
		printf("\nNot Densed");
	else
		printf("\nDensed");
	
}