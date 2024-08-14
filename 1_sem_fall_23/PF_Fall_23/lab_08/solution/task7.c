#include<stdio.h>

int  main(){
	int t_price,d_price,no_visits;
	printf("Enter total price: ");
	scanf("%d",&t_price);
	printf("Enter total no of visits: ");
	scanf("%d",&no_visits);
	d_price = calculateDiscount(t_price,no_visits);
	printf("Price payable after discount: %d",d_price);
	return 0;
}
int calculateDiscount(int t_price,int n_visits){
	if(n_visits>10 && t_price>=50)
		t_price= t_price *0.85;
	else if(n_visits>5 && t_price>=30)
		t_price= t_price *0.90;
	return t_price;
}