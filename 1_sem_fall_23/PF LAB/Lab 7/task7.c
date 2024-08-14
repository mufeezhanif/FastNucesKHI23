#include<stdio.h>
int main(){
	int k,i,j,n,count,check=0;
	printf("Enter length of array: ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter number %d in list: ",(i+1));
		scanf("%d",&arr[i]);
	}
	
//		PRINT ARRAY

	printf("\n\n");
	for(i=0;i<n;i++){
		printf("%d, ",arr[i]);
	}
	printf("\n\n");
	for(i=0;i<n;i++){
		check=0;
		count=0;
		for(j=0;j<n;j++){
			if(arr[i]==arr[j])
				count++;
		}
		for(k=0;k<i;k++){
			if(arr[k]==arr[i]){
				check=1;
			}
		}
		if(check!=1)
			printf("\nFrequency of %d = %d",arr[i],count);	
	}
	return 0;
}
