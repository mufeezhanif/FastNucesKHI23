#include<stdio.h>
#include<string.h>

typedef struct{
	char first[6];
	char second[8];
	int third;
}nic;
int main(){
	nic id;
	printf("enter nic with dashes: ");
	scanf("%5s",id.first);
	getchar();
	scanf("%7s",id.second);
	getchar();
	scanf("%1d.",&id.third);
	
	puts("");
	printf("Enter nic is given: %s-%s-%d",id.first,id.second,id.third);
	if(id.third %2==0)
		printf("\n\nFemale");
	else
		printf("\n\nmale");
	return 0;
}