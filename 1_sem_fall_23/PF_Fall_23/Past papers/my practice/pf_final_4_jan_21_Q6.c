#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void saveinorder(char *txt[]){
	char cpy[6][60];
	int j=0,i;
//	for(i=0;i<6;i++){
//		puts("");
//		puts(txt[i]);
//	}
	for(i=0;i<6;i++){
		if(strstr(txt[i],"one") !=NULL){
			strcpy(cpy[j],txt[i]);
			++j;	
		}
	}
	for(i=0;i<6;i++){
		if(strstr(txt[i],"two") !=NULL){
			strcpy(cpy[j],txt[i]);
			++j;	
		}
	}
	for(i=0;i<6;i++){
		if(strstr(txt[i],"three") !=NULL){
			strcpy(cpy[j],txt[i]);
			++j;	
		}
	}
	for(i=0;i<6;i++){
		if((strstr(txt[i],"two") ==NULL) && (strstr(txt[i],"one") ==NULL)&& (strstr(txt[i],"three") ==NULL)){
			strcpy(cpy[j],txt[i]);
			++j;	
		}
	}
	
	for(i=0;i<6;i++){
		puts("");
		puts(cpy[i]);
	}
	
}

int main(){
	char * txt[] ={"this sentence contains two", "one is so easy", "what is two", "this cannot be three", "why is this not three", "no numbers here"};
	int i;
	
	saveinorder(txt);

	return 0;
}