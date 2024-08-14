#include<stdio.h>
#include<string.h>

int main(){
	int car,week;
	printf("Enter car number and the week day using a space between: ");
	scanf("%d %d",&car,&week);
	switch(decideCarUsage(car,week)){
		case 0:{
			printf("\nCar should not be used");
			break;
		}
		case 1:{
			printf("\nCar should be used");
			break;
		}
	}
	return 0;	
}

int decideCarUsage(int c,int w){
	if((c%2==0 && w%2==0) || (c%2!=0 && w%2!=0)){
		return 1;
	}
	else
		return 0;
}
