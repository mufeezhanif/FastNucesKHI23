#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int i,n,x,y;
	printf("Enter no of movements, starting x, starting y:\n");
	scanf("%d%d%d",&n,&x,&y);
	char* ptr = (char *) malloc(n*sizeof(char));
	printf("\nEnter commands: \n");
	for(i=0;i<n;i++){
		fflush(stdin);
		scanf("%c",&ptr[i]);
		switch(ptr[i]){
			case 'L':
				{
					x--;
					break;
				}
			case 'R':
				{
					x++;
					break;
				}
			case 'U':
				{
					y++;
					break;
				}
			case 'D':
				{
					y--;
					break;
				}
			
		}
	}
	free(ptr);
	printf("Final coordinates = (%d, %d) - After performing movement commands, final coordinates will be (%d, %d) ",x,y,x,y);
		
}    