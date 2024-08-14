#include<stdio.h>

int main(void){
	int item1,item2,item3,item4,item5,item_Total;
	float GST, Grand_Total,Profit;
	printf("enter item 1 price: ");
	scanf("%d",&item1);
	printf("enter item 2 price: ");
	scanf("%d",&item2);
	printf("enter item 3 price: ");
	scanf("%d",&item3);
	printf("enter item 4 price: ");
	scanf("%d",&item4);
	printf("enter item 5 price: ");
	scanf("%d",&item5);
	
	item_Total = item1 + item2 + item3 + item4 + item5;
	GST = item_Total*18/100;
	Grand_Total = GST + item_Total;
	Profit = item_Total*15/100; 
	printf("\n\n\t\t SALMAN grocery Store\n\n");
	printf("\t_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n");
	printf("\n\tDescription              |        Price\n\n");
	printf("\t_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n");
	printf("\n\tItem 1                   |        %d\n",item1);
	printf("\n\tItem 2                   |        %d\n",item2);
	printf("\n\tItem 3                   |        %d\n",item3);
	printf("\n\tItem 4                   |        %d\n",item4);
	printf("\n\tItem 5                   |        %d\n",item5);
	printf("\n\n\t_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n\n");
	printf("\n\tItem Total               |        %d\n",item_Total);
	printf("\n\tGST                      |        %.1f\n",GST);
	printf("\n\n\t_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n\n");
	printf("\n\tGrand Total              |        %.1f\n",Grand_Total);
	printf("\n\n\n\tTotal Profit Earned      |        %.1f\n\n\n",Profit);
	return 0;
}