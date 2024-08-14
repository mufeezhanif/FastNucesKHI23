#include<stdio.h>
#include<string.h>

void encrypt(char * str){
		FILE * fp = fopen("q52019.txt","w");
		int count = strlen(str);
		for(int i=0;i<count;++i){
			fputc((str[i]+2),fp);
		}
		fclose(fp);
	}

void decrypt(char *str){
		FILE * fp = fopen("q52019.txt","r");
		int ch = fgetc(fp);
		while(ch !=EOF){
			printf("%c",ch-2);
			ch = fgetc(fp);
		}
	fclose(fp);
}


int main(){
	char str[50];
	gets(str);
	encrypt(str);
	printf("\n\nEncryption");
	decrypt(str);
	printf("\n\ndecryption");
	printf("\n\tstring is %s",str);
	return 0;
}