#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>


int main(){
	FILE *name = fopen("q2_names.txt","a+"); 
	srand(time(NULL));
	int i,index =rand()%20;
	index=2;
	printf("%d %d",index,ftell(name));
	rewind(name);
	char names[20];
	for(i=0;i<=171;++i)
//	while(names!=EOF)
{
		fscanf(name,"%s",names);
//		fgets(names,30,name);
		printf("%s\n",names);
		printf("%d %d",index,ftell(name));
	}
//	if(strcmp(names,"o")!=0 ){
		fprintf(name,"%s","o");
		fprintf(name,"%s","hello");
//	}
	fclose(name);
	return 0;
}