#include<stdio.h>

int main(){
	int i,large,medium,size,feedback=0,cars,small;
	printf("Enter no of large spaces: ");
	scanf("%d",&large);
	printf("Enter no of medium spaces: ");
	scanf("%d",&medium);
	printf("Enter no of small spaces: ");
	scanf("%d",&small);
	printf("Enter no of cars: ");
	scanf("%d",&cars);
	int space_l= large;
	int space_m= medium;
	int space_s= small;
	
	for(i=0;i<cars;i++){
		printf("Enter 3 for large,2 for medium, 1 for small: ");
		scanf("%d",&size);
		switch (size){
			case 3:{
				if(large>0){
					large--;
					feedback += 5;
					
				}
				else{
					feedback -=50;
				}
				break;
			}
			case 2:{
				if(large>0){
					large--;
					feedback += 10;
				}
				else if(medium>0){
					medium --;
					feedback +=5;
					
				}
				else{
					feedback -=50;
				}
					break;}
			case 1:{
				if(large>0){
					large--;
					feedback += 10;
					
				}
				else if(medium>0){
					medium --;
					feedback +=10;
					
				}
				else if(small>0){
					small--;
					feedback += 5;
					
				}
				else{
					feedback -=50;
				}
				
					break;
				
			}
			default:{
				printf("Enter from the given number");
				break;
			}
				
		}	
	}
	printf("\nFeedback score is: %d",feedback);
	printf("\nLarge space occupied: %d",(space_l-large));
	printf("\nMedium space occupied: %d",(space_m-medium));
	printf("\nSmall space occupied: %d",(space_s-small));
	
	
	
	return 0;
}