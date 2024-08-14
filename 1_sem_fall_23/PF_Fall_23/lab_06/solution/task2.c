#include<stdio.h>
int main(){
	int i,j,sum,count=0;
	for(i=1 ,j =0;i<10000;i = i+j){
		j += i;
		printf("%d, ",i);
		printf("%d, ",j);
		if(i%3==0 || i%5==0 || i%7==0 ){
			sum += i;
		}
		
		if(j%3==0 || j%5==0 || j%7==0 ){
			sum += j;
		}
		
	}
	printf("\b\b ");
	printf("\nSum is : %d",sum);
	return 0;
}