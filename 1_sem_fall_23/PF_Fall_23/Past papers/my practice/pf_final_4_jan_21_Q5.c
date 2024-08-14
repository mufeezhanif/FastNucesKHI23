#include<stdio.h>
#include<string.h>
#include<stdlib.h>



int main(){
	char fname[20];
	char content[100];
	int line;
	char tmp[100];
	
	printf("Input the file name to be opened: ");
	gets(fname);
	printf("Input the content of the new line:  ");
	fflush(stdin);
	gets(content);
	printf("Input the line no: ");
	scanf(" %d",&line);
	
	FILE *fp=fopen(fname,"r+");
	if(fp==NULL){
		printf("erroe");
		exit(1);
	}
	rewind(fp);
	for(int i =0;i<line-1;++i){	
		fgets(tmp,100,fp);
		printf("%d",ftell(fp));
	}
	int j=0;
	fseek(fp,-1,SEEK_CUR);
	while(content[j]!='\0'){
		
		printf("%d",ftell(fp));
		fprintf(fp,"%c",content[j]);
		j++;
		printf("\n\tdone");
	}
//		fprintf(fp,"%c","\n");
	printf("\n\tdone");
	
	return 0;
}