#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define size 15

int main(){
	int n1,n2,tn,i,j,tmp;
	scanf("%d%d",&n1,&n2);
	int arr1[size],arr2[size],m_arr[size];
	printf("\nFor array 1: \n");
	for(i=0;i<n1;i++){
		scanf("%d",&arr1[i]);
		m_arr[i] = arr1[i];
	}
	printf("\nFor array 2: \n");
	for(i=0;i<n2;i++){
		scanf("%d",&arr2[i]);
		for(j=0;j<n1;j++){
			if(arr2[i]==m_arr[j]){
				--i;
				break;
			}
		}
	}
	tn =n1+n2;
	for(i=n1,j=n2-1;i<tn,j>=0;i++,j--){
		m_arr[i] = arr2[j];
	}
	printf("\nmerged\n\t");
	for(i=0;i<tn;i++){
		printf("%d ",m_arr[i]);
	}
	
	for(i=0;i<tn;i++){
		for(j=0;j<tn-1;++j){
			if(m_arr[j]>m_arr[j+1]){
				tmp = m_arr[j];
				m_arr[j] = m_arr[j+1];
				m_arr[j+1] = tmp;
			}
		}
	}
	printf("\nsorted: \n\t");
	for(i=0;i<tn;i++){
		printf("%d ",m_arr[i]);
	}
	return 0;
}