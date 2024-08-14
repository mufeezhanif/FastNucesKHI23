#include<stdio.h>
#include<string.h>


int main(){
	char cellnamedata[4][2][25]= {{"cellno.", "cellName"},{"0.1","LiverCell"},{"0.2","KidneyCell"},{"0.3","LungCell"}};
	char tm[25];
	char cellexpdata[5][6][25];
	FILE * fp = fopen("cellexpdata.txt","r");
	for(int i =0;i<5;++i){
		for(int j=0;j<7;++j){
			fscanf(fp,"%s",tm);
			strcpy(cellexpdata[i][j],tm);
		}
	}
	for(int i =0;i<5;++i){
		for(int j=0;j<7;++j){
			printf("%s\t",cellexpdata[i][j]);
			
		}
		puts("");
	}
	char merged[5][4][25];
	for(int i=1;i<4;++i){
		for(int j =0;j<7;++j){
			if(strcmp(cellnamedata[i][1],cellexpdata[0][j]) == 0){
				
					for(int k=0;k<4;k++){
						strcpy(merged[k][i],cellexpdata[k][j]);
					}
				}
		}
	}
	
	for(int i=0;i<5;++i){
		strcpy(merged[i][0],"gene");
	}
	for(int i =0;i<5;++i){
		for(int j=0;j<4;++j){
			printf("%s\t",merged[i][j]);
			
		}
		puts("");
	}
	return 0;
}