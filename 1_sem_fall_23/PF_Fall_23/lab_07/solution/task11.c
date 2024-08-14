#include<stdio.h>

int main(){
	int i,j,check=0,result=0,n,sum=0;
	printf("Enter length of array: ");
	scanf("%d",&n);
	printf("Enter sum: ");
	scanf("%d",&sum);
	int arr[n];
	printf("\nEnter array: ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		check=arr[i];
		for(j=i+1;j<n;j++){
			check += arr[j];
			if(check==sum){
				result=1;
				printf("\nThe Elements from Index %d to %d when summed results in the output %d",i,j,sum);
				break;
			}
		}
		if(result==1){
			break;
		}
	}
		
	return 0;
}