#include<stdio.h>

int main(){
	printf("k230800 Muhammad Mufeez \n\n");
	int day,l_price,i,pref_day,count=0;
	char ch,time;
	char days[5][30]={{"monday"},{"tuesday"},{"wednesday"},{"thursday"},{"friday"}}; // weekdays array
	//array hardcode
	int flights[5][4]= {
	{1,300,0,59999952},
	{1,320,1,310},
	{0,599999245,1,280},
	{1,380,0,5897545},
	{1,375,1,400}
	};
	
		//to get input of the array from the user
//	int flights[5][4];
//	for(i=0;i<5;i++){
//		printf("Enter for %s: ",days[i]);		
//		for(int j=0;j<4;j++){
//			scanf("%d",&flights[i][j]);
//		}
//	}
	//assigning garbage value on price column having no available seats
	for(i=0;i<5;i++){
		for(int j=0;j<4;j+=2){
			if(flights[i][j]==0)
			flights[i][j+1]=59992653;
		}
	}


	printf("\nEnter 't' for preference wrt time, 'd' for days: ");
	fflush(stdin);
	scanf("%c",&ch);
	switch(ch)
	{
		case 't':
		{
			printf("\nEnter 'm' and for morning 'e' for evening: ");
			fflush(stdin);
			scanf(" %c",&time);
			switch(time)
			{
				case 'm':
				{
				day = 4;
				l_price= flights[4][1];
				for(i=0;i<5;i++){
						if(flights[i][0]==1){
							if(flights[i][1]<l_price){
								
								day=i;
								l_price=flights[i][1];
							}
						}
					}
					printf("\nFlight is available on %s, price = %d",days[day],l_price);
					break;		
				}
				case 'e':
				{
				day = 0;
				l_price= flights[0][3];
				for(i=0;i<5;i++){
						if(flights[i][2]==1){
							if(flights[i][3]<l_price){
								day=i;
								l_price=flights[i][3];
							}
						}
					}
				
					printf("Flight is available on %s, price = %d",days[day],l_price);		
					break;
				}
				default:{
					printf("Error!! please enter from the given value..! Restart the program..");
					break;
				}
			}
		break;	
		}
		case 'd':
		{
			printf("Enter no of day, (week starts from monday)i.e. 1 for monday: ");
			scanf("%d",&pref_day);
			count = pref_day-1;
			if(flights[count][0]==1 || flights[count][2]==1){
				
				if(flights[pref_day-1][0]==1)
				printf("\n\nFlight available in Morning with Price on %s: %d",days[count],flights[pref_day-1][1]);
			
			if(flights[pref_day-1][2]==1)
				printf("\n\nFlight available in Evening with Price on %s: %d",days[count],flights[pref_day-1][3]);
			
			}
			else{
				printf("\n No flights available on the given day");
			}
			
			break;
		}
		default:{
			printf("Error!! please enter from the given value..! Restart the program..");
			break;
		}
	}
	return 0;	
}
