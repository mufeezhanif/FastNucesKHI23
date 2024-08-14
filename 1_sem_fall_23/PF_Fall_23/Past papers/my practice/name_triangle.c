#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char ctr[20];
	gets(ctr);
	int num =strlen(ctr);
	int ind=0;
	for(int i =0;i<num;++i){
		for(int j=0;j<=i;++j){
			if(ind==num){
				ind=0;
			}
			printf("%c ",ctr[ind]);
			ind++;
		}
		puts("");
	}
	
	return 0;
}