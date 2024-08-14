#include<stdio.h>


int main(){
	float n;
	printf("Enter Ritcher Scale Number n: ");
	scanf("%f",&n);
	if(n<5.0){
		printf("Little or no damage");
	}
	else if(n>=5.0 && n<5.5){
		printf("Some Damage");
	}
	else if(n>=5.5 && n<6.5){
		printf("Serious damage: walls may crack or fall");
	}
	else if(n>=6.5 && n<7.5){
		printf("Disaster: House and Buildings may collapse");
	}
	else{
		printf("Catastrophe: most buildings destroyed");
	}
	
	return 0;
}
/*
we can not use switch statement for above problem because switch statement 
does not work on any range, we can not use < > or <= >= in the parenthesis of switch

/*