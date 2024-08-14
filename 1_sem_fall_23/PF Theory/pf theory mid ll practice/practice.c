#include<stdio.h>

int main(){
	char colours[]="yyybbbbyyy";
	char game[100];
	int done=0,turn,i,j,count=0;
	while(game!="end"){
		switch(count%2==0)
		{
			case 1:
				{
					for(i=1;colours[i]!='\0' && done!=1;i++){
						turn =0;
						if(colours[i]=='y'){
							if(colours[i+1]=='y'&& colours[i-1]=='y'){
								turn =1;
								for(j=i;colours[j+2]!='\0';j++){
									colours[j]=colours[j+1];
								}
								done =1;
								count++;
							}
							}
						}
						if(turn==0)
							printf("Binish");
							game[100]="end";
						
					break;
					}
			case 0:
				{
					for(i=1;colours[i]!='\0' && done!=1;i++){
						turn =0;
						if(colours[i]=='b'){
							if(colours[i+1]=='b'&& colours[i-1]=='b'){
								turn =1;
								for(j=i;colours[j+2]!='\0';j++){
									colours[j]=colours[j+1];
								}
								done =1;
								count++;
							}
							}
						}
						if(turn==0)
							printf("Yasir");
							game[100]="end";
					break;
				}
				}
		}
	return 0;
	}

