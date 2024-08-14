#include<stdio.h>

int count(int arr[][3],int r,int c,int i,int j,int n){
	if(i==r && j==c){
		if(arr[i][j]==1)
			return 1;
		else
			return 0;
	}
	else if(arr[i][j]==1){
		n=1;
		if(j==c){
			i++;j=0;
		}
		else{
			j++;
		}
		return n + count(arr,r,c,i,j,n);
	}
	else{
		n=0;
		
		if(j==c){
			i++;j=0;
		}
		else{
			j++;
		}
		return n + count(arr,r,c,i,j,n);
	}
//	return n+1;
	printf("check");
}


int main(){
	int arr[3][3] = {{1,0,0},{0,1,1},{1,0,1}};
	int n = 0;
	n=count(arr,2,2,0,0,n);
	printf("%d",n);
	return 0;
}