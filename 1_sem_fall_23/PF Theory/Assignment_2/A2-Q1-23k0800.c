#include<stdio.h>

int main(){
	printf("k230800 Muhammad Mufeez \n\n");
	int i,j,batsman,innings,total,highscore,average,centuries,half_centuries;
	printf("Enter no of batsman: "); //input for the no of batsman
	scanf("%d",&batsman);
	printf("Enter no of innings: "); // no of innings
	scanf("%d",&innings);
	int arr[batsman][innings];
	//runs scored by each batsman in an inning
	for(i =0; i<batsman;i++){
		for(j = 0 ; j < innings;j++){
			printf("Enter runs for batsman %d in inning %d: ",(i+1),(j+1));
			scanf("%d",&arr[i][j]);
		}
	}
	for(i =0; i< batsman;i++){
		printf("\n\nFor batsmen %d: ",(i+1));
		total=0;
		highscore=0;
		centuries=0;
		half_centuries=0;
		for(j = 0 ; j < innings;j++){
			total += arr[i][j];
			if(arr[i][j]>highscore){
				highscore=arr[i][j];
			}
			if(arr[i][j]>49 && arr[i][j]<100){
				half_centuries++;
			}
			else if(arr[i][j]>=100)
					centuries++;
		
		}
		average = (total/innings);
		printf("\nTotal runs scored: %d",total);
		printf("\nAverage runs: %d",average);
		printf("\nHighscore: %d",highscore);
		printf("\nNo of centuries: %d",centuries);
		printf("\nNo of half-centuries: %d",half_centuries);
		
	}
	
	
	return 0;	
}
