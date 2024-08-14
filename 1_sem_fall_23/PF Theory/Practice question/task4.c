#include<stdio.h>
#include<math.h>

int main(){
	int n=0,sqr,cube;
	float sqr_root;
	printf("Enter number: ");
	scanf("%d",&n);
	do{
	sqr = n*n;
	cube = sqr *n;
	sqr_root = sqrt(n);
	printf("\nSquare of %d is %d ",n,sqr);
	printf("\ncube of %d is %d ",n,cube);
	printf("\nSquare root of %d is %.2f ",n,sqr_root);
	printf("Enter number: ");
	scanf("%d",&n);
	}while(n!=9999);
	printf("\n\nProgram ended");
	return 0;
}