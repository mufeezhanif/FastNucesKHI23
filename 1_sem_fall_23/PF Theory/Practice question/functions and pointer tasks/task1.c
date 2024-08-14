#include<stdio.h>

int main(){
	int num,power=1;
	scanf("%d",&num);
	for(int i =1;i<9;i++){
		power = power*num;
	}
	printf("\n%d",power);
	return 0;
}