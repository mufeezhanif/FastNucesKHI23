#include<stdio.h>

int main(){
	char name[5][50];
	int i,j,last;
	for(i=0;i<5;i++){
		gets(name[i]);
	}
	for(i=0;i<5;i++){
		last=strlen(name[i]);
		if(name[i][0]==name[i][last-1]){
			puts(name[i]);
		}
	}
	return 0;
	}

