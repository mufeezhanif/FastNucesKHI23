#include<stdio.h>

int main(){
	printf("k230800 Muhammad Mufeez \n\n");
	char maze[5][5]={
	{'S','O','O','W','W'},
	{'O','W','O','W','W'},
	{'W','O','O','W','O'},
	{'W','W','O','W','O'},
	{'W','W','O','E','W'}
	};
//	input maze
//	char maze[5][5];
//	for(int i=0;i<5;i++){
//		printf("row %d",(i+1));
//		for(int j=0;j<5;j++){
//			scanf(" %c ",&maze[i][j]);	
//		}
//		printf("\n");
//	}
	int s_x,s_y,e_x,e_y,k,l,i,j,ret=1;;	
	//print maze
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
		printf("%c ",maze[i][j]);	
		}
		printf("\n");
	}
	//finding start and end point
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(maze[i][j]=='S'){
				s_x=i;
				s_y=j;
			}
			else if(maze[i][j]=='E'){
				e_x=i;
				e_y=j;
			}
		}
	}
	
	
	printf("\n%d,%d  ",s_x,s_y);
	for(i=s_x;i<=e_x;i++){
		for(j=s_y;j<=e_y;j++){
			ret=1;
			if((maze[i][j]=='O' && (maze[i+1][j]=='O' || maze[i][j+1]=='O'))){
				for(k=i,l=j;k<=e_x,l<=e_y;){
				
					if(maze[k][l+1]=='O'){
						l++;
						continue;
					}
					else if(maze[k+1][l]=='O'){
						k++;
						continue;
					}
					
					else{
						ret=0;
						break;
					}
				}
			}
			else{
				continue;
			}
			if(k==e_x || l==e_y){
					printf("%d,%d  ",i,j);
					if(maze[i][j+1]=='O')
					j++;
					else if(maze[i+1][j]!='O')
					i++;
					
				}
		}
	}
	printf("%d,%d",e_x,e_y);
	return 0;	
}
