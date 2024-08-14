#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define size 15

void input(int *arr,int n , int *merged){
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		merged[i] = arr[i];
		for(j=0;j<i;j++){
			if(arr[i]==arr[j]){
				--i;
				break;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("\t%d ",arr[i]);
	}
}
void input2(int *arr,int n ,int n1, int *merged){
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		for(j=0;j<n1;j++){
			if(arr[i]==merged[j]){
				--i;
				break;
			}
		}
	}
}

void sorting(int n, int *arr){
	int i,j,tmp;
	for(i=0;i<n;i++){
		for(j=0;j<n-1;++j){
			if(arr[j]>arr[j+1]){
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
}
int main(){
	int n1,n2,tn,i,j,tmp;
	scanf("%d%d",&n1,&n2);
	int arr1[size],arr2[size],m_arr[size];
	//input arr1;
	printf("\nFor array 1: \n");
	input(arr1,n1,m_arr);
	printf("\nFor array 2: \n");
	input2(arr2,n2,n1,m_arr);
	
	tn =n1+n2;
	for(i=n1,j=n2-1;i<tn,j>=0;i++,j--){
		m_arr[i] = arr2[j];
	}
	
	printf("\nmerged\n\t");
	for(i=0;i<tn;i++){
		printf("%d ",m_arr[i]);
	}
//	sorting
	
	sorting(tn,m_arr);
	printf("\nsorted: \n\t");
	for(i=0;i<tn;i++){
		printf("%d ",m_arr[i]);
	}
	return 0;
}