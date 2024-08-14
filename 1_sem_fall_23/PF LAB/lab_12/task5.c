#include<stdio.h>
#include<string.h>



int main(){
	char str[20];
	gets(str);
	printf("\nNormal Text\n\n%s\n\nEncypted text inserted in the file\n\n",str);
	int length = strlen(str);
	FILE *fptr = fopen("task5.txt","w");
	int i=0,ch;
	for(i=0;i<length;i++){
		ch = str[i];
		ch += (i+1);
		putchar(ch);
		putc(ch,fptr);
		
	}
	fclose(fptr);
	printf("\n\nDecrypted text Read then decoded from file\n\n");
	
	fptr = fopen("task5.txt","r");
	for(i=0;i<length;i++){
		ch = getc(fptr);
		ch -= (i+1);
		putchar(ch);
	}
	fclose(fptr);
	return 0;
}