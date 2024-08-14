#include<stdio.h>

int main(){
	int i,j;
//	printf("0 1 2 3 4 5 6 7 8 9");
//	printf("\n1\t*\n2\t\b*   *\n3\t\b\b*      *\t   *\n4\t\b\b\b*\n5\n6\n7\n8\n9\n10");
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			switch (j){
				case 0:{
					printf("*");
					break;
				}
			}
						
		}
		printf("\n");
	}
	return 0;
}