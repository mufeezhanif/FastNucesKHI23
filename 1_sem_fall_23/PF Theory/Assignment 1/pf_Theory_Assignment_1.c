#include<stdio.h>
#include<math.h>

int main(){
	
//	int i,num1,num2,c_factor;
//	printf("enter num1: ");
//	scanf("%d",&num1);
//	printf("enter num2: ");
//	scanf("%d",&num2);
//	i = 1;
//	while(i <= num1 && i<=num2){
//		if(num1%i==0 && num2%i==0){
//			c_factor = i;
//		}
//		i++;
//	}
//	printf("GCD of given num is: %d",c_factor);
	
	
//		printf("%d",i);
//		}	nf("%d",&C);           
//		printf("Sum of A & B is greater than C");
//	}
//	else{
//		printf("sum is less than C");
//	}

//	                                             QUESTION 1 C 
	int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;
	scanf("%d%d%d%d%d%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10);
	int sum = n1+n2+n3+n4+n5+n6+n7+n8+n9+n10;
	int diff = sum - n1;
	int smallest = n1;
	if ((sum - n2)>diff){
		smallest = n2;
		diff = sum - n2;
	}
	if ((sum - n3)>diff){
		smallest = n3;
		diff = sum - n3;
	}
	if ((sum - n4)>diff){
		smallest = n4;
		diff = sum - n4;
	}
	if ((sum - n5)>diff){
		smallest = n5;
		diff = sum - n5;
	}
	if ((sum - n6)>diff){
		smallest = n6;
		diff = sum - n6;
	}
	if ((sum - n7)>diff){
		smallest = n7;
		diff = sum - n7;
	}
	if ((sum - n8)>diff){
		smallest = n8;
		diff = sum - n8;
	}
	if ((sum - n9)>diff){
		smallest = n9;
		diff = sum - n9;
	}
	if ((sum - n10)>diff){
		smallest = n10;
		diff = sum - n10;
	}
	printf("\n smallest is %d", smallest);

//															UESTION 1 D

//	int num,place=1,binary=0;
//	printf("Enter number: ");
//	scanf("%d",&num);
//	while(num>0){
//		int remainder = num % 2;
//		binary = binary + (remainder * place) ;
//		place = place * 10;
//		num = num /2;
//	}
//	printf("%d",binary);

//                                                  QUESTION 1 E

	int num,i, quantity,even_numbers;
	printf("how many numbers?");
	scanf("%d",&quantity);
	i=1;
	even_numbers = 0;
	while(i<=quantity){
		printf("Enter Number %d: ",i);
		scanf("%d",&num);
		if(num%2==0){
			even_numbers++;
		}
		i++;
	}
	printf("%d",even_numbers);

	
//	int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;
//	printf("enter n1: ");
//	scanf("%d",&n1);
//	printf("enter n2: ");
//	scanf("%d",&n2);
//	printf("enter n3: ");
//	scanf("%d",&n3);
//	printf("enter n4: ");
//	scanf("%d",&n4);
//	printf("enter n5: ");
//	scanf("%d",&n5);
//	printf("enter n6: ");
//	scanf("%d",&n6);
//	printf("enter n7: ");
//	scanf("%d",&n7);
//	printf("enter n8: ");
//	scanf("%d",&n8);
//	printf("enter n9: ");
//	scanf("%d",&n9);
//	printf("enter n10: ");
//	scanf("%d",&n10);
//	
//	if (n1<n2){
//		if(n1<n3 && n1<n4 && n1<n5 && n1<n6 && n1<n7 && n1<n8  && n1<n9 && n1<n10){
//			printf("%d is the smallest number",n1);
//		}
//	}
//	else if(n2<n1){
//		if(n2<n3 && n2<n4 && n2<n5 && n2<n6 && n2<n7 && n2<n8  && n2<n9 && n2<n10){
//			printf("%d is the smallest number",n2);
//		}
//	}
	
//	int item1,item2,item3,item4,item5,item_Total;
//	
//	float GST, Grand_Total,Profit;
//	printf("enter item 1 price: ");
//	scanf("%d",&item1);
//	printf("enter item 2 price: ");
//	scanf("%d",&item2);
//	printf("enter item 3 price: ");
//	scanf("%d",&item3);
//	printf("enter item 4 price: ");
//	scanf("%d",&item4);
//	printf("enter item 5 price: ");
//	scanf("%d",&item5);
//	
//	item_Total = item1 + item2 + item3 + item4 + item5;
//	GST = item_Total*18/100;
//	Grand_Total = GST + item_Total;
//	Profit = item_Total*15/100; 
//	printf("\n\n\t\t SALMAN grocery Store\n\n");
//	printf("\t_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n");
//	printf("\n\tDescription              |        Price\n\n");
//	printf("\t_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n");
//	printf("\n\tItem 1                   |        %d\n",item1);
//	printf("\n\tItem 2                   |        %d\n",item2);
//	printf("\n\tItem 3                   |        %d\n",item3);
//	printf("\n\tItem 4                   |        %d\n",item4);
//	printf("\n\tItem 5                   |        %d\n",item5);
//	printf("\n\n\t_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n\n");
//	printf("\n\tItem Total               |        %d\n",item_Total);
//	printf("\n\tGST                      |        %.1f\n",GST);
//	printf("\n\n\t_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n\n");
//	printf("\n\tGrand Total              |        %.1f\n",Grand_Total);
//	printf("\n\n\n\tTotal Profit Earned      |        %.1f\n\n\n",Profit);
	
	
	
	
	return 0;
}

	

