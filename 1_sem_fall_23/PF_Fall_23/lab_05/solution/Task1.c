#include<stdio.h>

int main(){
	char statement;
	printf("Are you sure to delete?");
	scanf("%c",&statement);
	switch(statement){
		case 'Y':
			printf("Deleted successfully");
			break;
			
		case 'y':
			printf("Deleted successfully");
			break;
			
		case 'n':
			printf("Delete canceled");
			break;
			
		case 'N':
			printf("Delete canceled");
			break;
			
		default:
			printf("choose the right option");
	}
}