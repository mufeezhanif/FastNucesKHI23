#include<stdio.h>
int main(){
	int n,d,count=0,remain=0;
	printf("Enter n: ");
	scanf("%d",&n);
	printf("Enter d: ");
	scanf("%d",&d);
	
		if(n%d==0){
			while(n>0){
				n=n-d;
				count++;
			}
		}
		else{
			remain = n-d;
			count++;
			while(remain>d){
			remain -= d;
			count++;
		}
			
		}
	
	printf("\ndividend: %d",n);
	printf("\nquotent: %d",count);
	printf("\nRemainder: %d",remain);
	return 0;
}
