#include<stdio.h>

int main(){
	printf("_______________________________________________________________________________________");
	printf("\n\nOperation\t\t\tWhite Coffee\t\t\tBlack Coffee");
	printf("\n_______________________________________________________________________________________");
	printf("\nPut water\t\t\t15 mins\t\t\t\t20mins");
	printf("\nSugar\t\t\t\t15 mins\t\t\t\t20mins");
	printf("\nMix well\t\t\t20 mins\t\t\t\t25mins");
	printf("\nAdd Coffee\t\t\t2 mins\t\t\t\t15mins");
	printf("\nAdd Milk\t\t\t4 mins\t\t\t\t  -");
	printf("\nMix Well\t\t\t20 mins\t\t\t\t25mins");
	printf("\n_______________________________________________________________________________________");
	int t15 = 15,t20=20,t25=25,t2=2,t4=4; //cariables t numbers mean the time in minutes
	char type,coffee_Size;
	printf("\nType B for Black and W for White Coffee: ");
	scanf(" %c",&type);
	printf("\nType D for Double and M for Manual Coffee: ");
	scanf(" %c",&coffee_Size);
	switch(type){
		case 'W':{
			printf("\n\nYou Have Ordered White Coffee");
			switch(coffee_Size){
				case 'M':
					{
					printf("\nCoffee size is manual\n\n");
					printf("Put Water: %d mins",t15);
					printf("\nSugar : %d mins",t15);
					printf("\nMix Well : %d mins",t20);
					printf("\nAdd Coffee: %d mins",t2);
					printf("\nAdd Milk: %d mins",t4);
					printf("\nMix Well: %d mins",t20);
					break;
					}
				case 'D':
					{
					printf("\nCoffee size is Double\n\n");
					printf("Put Water: %.0f mins",(t15*1.5));
					printf("\nSugar : %.0f mins",(t15*1.5));
					printf("\nMix Well : %d mins",(t20*3/2));
					printf("\nAdd Coffee: %d mins",(t2*3/2));
					printf("\nAdd Milk: %d mins",(t4*3/2));
					printf("\nMix Well: %d mins",(t20*3/2));
					break;
					}
				default:
					printf("restart the program and please select correct character");
			}
			break;
		}
		case 'B':{
			printf("\n\nYou have ordered Black Coffee");
			switch(coffee_Size){
				case 'M':
					{
					printf("\nCoffee size is manual\n");
					printf("\nPut Water: %d mins",t20);
					printf("\nSugar : %d mins",t20);
					printf("\nMix Well : %d mins",t25);
					printf("\nAdd Coffee: %d mins",t15);
					printf("\nMix Well: %d mins",t25);
					break;
					}
				case 'D':
					{
					printf("\nCoffee size is Double\n");
					printf("\nPut Water: %d mins",(t20*3/2));
					printf("\nSugar : %d mins",(t20*3/2));
					printf("\nMix Well : %d mins",(t25*3/2));
					printf("\nAdd Coffee: %d mins",(t15*3/2));
					printf("\nMix Well: %d mins",(t25*3/2));
					break;
					}
				default:
					printf("restart the program and please select correct character");
			}
			break;
		}
		default:
			printf("restart the program and please select correct character");
			
	}
	
}