#include<stdio.h>

int main(){
	int user,stick=21;
	do{
		
		printf("\nChoose 1 or 2 or 3 or 4: ");
		scanf("%d",&user);
		if(user>4 || user<1 ){
			printf("Please choose from the range 1-4");
			continue;
			}
		stick = stick - user;
		printf("\nsticks remaining: %d",stick);
		if(stick<=0){
			break;
		}
		switch(stick){
			case 7:{
				printf("\nComputer chose 1");
				stick--;
				break;
			}
			case 6:{
				printf("\nComputer chose 2");
				stick = stick -2;
				break;
			}
			case 5:{
				printf("\nComputer chose 4");
				stick = stick -4;
				break;
			}
			case 4:{
				printf("\nComputer chose 3");
				stick = stick -3;
				break;
			}
			default:{
				switch(stick%2==0){
					case 0:{
						printf("\nComputer chose 2");
						stick = stick -2;
						break;
			}
					case 1:{
						printf("\nComputer chose 1");
						stick--;
						break;
			}
				
		}
				break;
			}
		}
		
		
		printf("\nsticks remaining: %d",stick);
		if(stick==1){
		printf("\n                                 Computer Won!!!                ");
		break;
		}
	}while(stick>0);
	return 0;
	
}