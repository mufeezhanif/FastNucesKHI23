#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int i, j, rows = 6, cols = 6,ships=0,turns=10,hits=0,user_win=0,missed=0,x,y;
	char winner[8];

    char **ptr = (char **)calloc(rows, sizeof(char *));
    for (i = 0; i < rows; i++) {
        *(ptr + i) = (char *)calloc(cols, sizeof(char));
    }

    

    printf("Enter S for ships and E for empty space:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf(" %c", *(ptr + i) + j);
        }
    }

    printf("Updated array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%c ", *(*(ptr + i) + j));
        }
        printf("\n");
    }
    
    for (i = 0; i < rows; i++) 
	{
        for (j = 0; j < cols; j++) {
          if(*(*(ptr + i) + j) == 'S'){
			ships++;
        }
    }
	}
	if(ships==0){
				user_win=1;
			}
    
	
	for(i=0;i<10 && user_win == 0 ;i++){
		printf("\n Enter row and column number to fire:");
		scanf("%d%d",&x,&y);
		x--;
		y--;
		
		if(*(*(ptr + x) + y) == 'S'){
			*(*(ptr + x) + y) = 'E';
			ships--;
			turns--;
			hits++;
			if(ships==0){
				user_win=1;
			}
		}
		else{
			missed++;
			turns--;
			
		}
	}
	if(user_win ==1){
		strcpy(winner, "user");
	}
	else{
		strcpy(winner, "bot");
	}
	
	printf("\n\n\tHits: %d \n\t Missed: %d\n\t Remaining Turns: %d\n\t Remaining Ships: %d \n\t Winner : %s",hits,missed,turns,ships,winner);

    for (i = 0; i < rows; i++) {
        free(*(ptr + i));
    }
    free(ptr);

}
    


