#include<stdio.h>

int main(){
	int barcode,count=0,i=4,remain,copy=1;
	int arr[5];
	printf("Enter 5 digit barcode: ");
	scanf("%d",&barcode);
	copy = barcode;
	while(i>=0){
		remain = copy%10;
		copy  /= 10;
		count++;
		arr[i] = remain;
		i--;
	}
	for(i=0;i<5;i++){
		printf(" %d",arr[i]);
	}
	if((arr[0]%2==0 || arr[0]%4==0) && (arr[1]%2==0 || arr[1]%4==0)){
		printf("\nCategory 1");
	}
	else if(arr[4]%3==0 && arr[3]%2!=0){
		printf("\nCondition 2");
	}
	else{
		printf("\nCategory 3");
	}
	
	return 0;
}