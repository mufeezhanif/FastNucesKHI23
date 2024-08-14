#include<stdio.h>


int main(){
	int quantity,types,pt1=0,pt2=0,pt3=0,pt4=0,total=0; //pt are the price of types of food
	char item,first_type,second_type,third_type,fourth_type;
	printf("\t\tABC Restuarant Online Oreder Placement");
	printf("\n\t\t\t\tWELCOME!\n\n");
	printf("Please elect from the following Menu \nB= Burger\nF= French Pizza\nP= Pizza\nS=Sandwitch");
	printf("\nHow many types of snacks you need to order: ");
	scanf("%d",&types);
	switch(types){
		case 2:{
			printf("Enter first Snack you want to order: ");
			scanf("/c",&first_type);
			switch(first_type){
				case 'B':
					pt1 = 200;
					break;
				case 'F':
					pt1=50;
					break;
				case 'P':
					pt1 = 500;
					break;
				case 'S':
					pt1=150;
					break;
			}
			printf("Please provide quantity: ");
			scanf("/c",&first_quantity);
			pt1=pt1*first_quantity;
			printf("Enter second Snack you want to order: ");
			scanf("/c",&second_type);
			switch(second_type){
				case 'B':
					pt2 = 200;
					break;
				case 'F':
					pt2=50;
					break;
				case 'P':
					pt2 = 500;
					break;
				case 'S':
					pt2=150;
					break;
			}
			printf("Please provide quantity: ");
			scanf("/c",&second_quantity);		
			pt2= pt2*second_quanity;
			break;
		}
		case 3:{
			printf("Enter first Snack you want to order: ");
			scanf("/c",&first_type);
			printf("Please provide quantity: ");
			scanf("/c",&first_quantity);
			printf("Enter second Snack you want to order: ");
			scanf("/c",&second_type);
			printf("Please provide quantity: ");
			scanf("/c",&second_quantity);
			printf("Enter third Snack you want to order: ");
			scanf("/c",&third_type);
			printf("Please provide quantity: ");
			scanf("/c",&third_quantity);	
			break;
		}
		case 4:{
			printf("Enter first Snack you want to order: ");
			scanf("/c",&first_type);
			printf("Please provide quantity: ");
			scanf("/c",&first_quantity);
			printf("Enter second Snack you want to order: ");
			scanf("/c",&second_type);
			printf("Please provide quantity: ");
			scanf("/c",&second_quantity);
			printf("Enter third Snack you want to order: ");
			scanf("/c",&third_type);
			printf("Please provide quantity: ");
			scanf("/c",&third_quantity);
			printf("Enter fourth Snack you want to order: ");
			scanf("/c",&fourth_type);
			printf("Please provide quantity: ");
			scanf("/c",&fourth_quantity);
			break;
		}
	}
		total =pt1+pt2+pt3+pt4;	

	return 0;
}
