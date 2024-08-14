#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int findIntersection(int *arr1,int *arr2,int a,int b,int *ptr_result){
	int common=0,i,j,k,same=0,index=0,same1=0;
	for(i=0;i<a;i++){
		same=0;
		for(k=0;k<i;k++){
			if(arr1[i]==arr1[k]){
				same=1;
			}
		}
		for(j=0;j<b && same==0;j++){
			same1=0;
			for(k=0;k<j;k++){
				if(arr2[j]==arr2[k]){
				same1=1;
				}
			}
			if(arr1[i]==arr2[j] && same1==0)
				common++;
		}
	}
	
	*ptr_result = common;
	int* ptr_common = (int*) calloc(common,sizeof(int));
	
	for(i=0;i<a;i++){
		same=0;
		for(k=0;k<i;k++){
			if(arr1[i]==arr1[k]){
				same=1;
			}
		}
		for(j=0;j<b && same==0;j++){
			same1=0;
			for(k=0;k<j;k++){
				if(arr2[j]==arr2[k]){
				same1=1;
				}
			}
			if(arr1[i]==arr2[j] && same1==0){
				*(ptr_common+index)= arr1[i];
				index++;
			}
		}
	}
	if(common ==0){
		return 0;
	}
	else{
		return ptr_common;
	}
}
int main(){
	int i,a,b,arr1[100],arr2[100],resultSize=0;
	printf("Enter sizes of two arrays: ");
	scanf("%d%d",&a,&b);
	printf("\nEnter Array one: ");
	for(i=0;i<a;i++){
		scanf("%d",&arr1[i]);
	}
	printf("\nEnter Array two: ");
	for(i=0;i<b;i++){
		scanf("%d",&arr2[i]);
	}
	int *ptr= findIntersection(arr1,arr2,a,b,&resultSize);
	
	 if (ptr == 0) {
        printf("\nThere are 0 common numbers");
    } else {
        printf("\nThere are %d common numbers", resultSize);
        printf("\nCommon numbers are: ");
        for (i = 0; i < resultSize; i++) {
            printf("%d ", *(ptr + i));
        }
        free(ptr); 
    }

}
    


