#include<stdio.h>
#include<math.h>

int main(){
	int n,check=0;
	printf("Enter number: ");
	scanf("%d",&n);
	for(int i=n-1;i>1;i--){
		if(n%i==0){
			printf("\nIt is not a prime number");
			check=1;
			break;
		}
	}
	if(check!=1)
	printf("\nIt is a prime number");
	return 0;
}