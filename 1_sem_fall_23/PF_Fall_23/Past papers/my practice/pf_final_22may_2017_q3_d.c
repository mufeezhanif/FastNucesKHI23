#include <stdio.h>
#include <ctype.h>
#include <string.h>

int mystrstr(char o_str,char subs){
	int i=0,check =1;
	while(o_str[i]!='\0'){
		if(o_str[i]==subs[0]){
			int j=1;++i;
			check =1;
			while(subs[j]!='\0'){
				if(o_str[i]!=subs[j]){
					check =0;
				}
			}
			if(check)
				break;
		}
	}
	if(check ==1)
		return 1;
}
int main(){
	char o_str[500];
	char subs[100];
	printf("Enter complete string: ");
	gets(o_str);
	fflush(stdin);
	printf("Enter subs: ");
	gets(subs);
	int flag = mystrstr(o_str,subs);
	if(flag)
		printf("String ""%s"" found in ""%s""",subs,o_str);
	else
		printf("String ""%s"" not found in ""%s""",subs,o_str);
	
	return 0;
}