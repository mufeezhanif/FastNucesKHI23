#include<stdio.h>
#include<string.h>

int main(){
	char pass[]="Secure123.";
	char pass_u[15];
	int login=0;
	while(login !=1){
		printf("\nEnter password: ");
		gets(pass_u);
		if(strlen(pass_u)>=8){
			if(strcmp(pass,pass_u)==0){
				printf("\nLogin successful. Welcome!");
				login=1;
		}
		else{
			printf("\nLogin failed. Incorrect password.\n");
			continue;
		}
	}
	
		else{
			printf("\nPassword is less than 8 characters\n");
			continue;
	}
}
	return 0;	
}
