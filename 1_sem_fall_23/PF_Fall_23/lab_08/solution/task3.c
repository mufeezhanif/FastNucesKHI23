#include<stdio.h>
#include<string.h>

int main(){
	int len,i,count=0;
	char str[100],ch;
	gets(str);
	fflush(stdin);
	scanf("%c",&ch);
	len = strlen(str);
	for(i=0;i<len;i++){
		if(str[i]==ch)
			count++;
	}
	printf("The count of character is %d",count);
	return 0;	
}
