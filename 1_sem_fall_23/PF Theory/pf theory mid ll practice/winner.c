#include<stdio.h>
void Check_Winner1(int arr[5][4]){
	int i,j,sum,candidate,high;
	for(i=0;i<5;i++){
		sum =0;
		candidate=0;
		high = arr[i][candidate];
		for(j=1;j<4;j++){
			if(arr[i][j]>high){
				candidate=j;
				high = arr[i][j];				
			}
		}
		printf("\nArea %d\t:\tCandidate %d",(i+1),candidate+1);
	}
}void Check_Winner2(int arr[5][4]){
	int i,j,sum,candidate,high;
	for(i=0;i<4;i++){
		sum =0;
		high = arr[i][candidate];
		for(j=1;j<4;j++){
			if(arr[i][j]>high){
				candidate=j;
				high = arr[i][j];				
			}
		}
		printf("\nCandidate %d\t:\tTot %d",(i+1),candidate+1);
	}
}
int main(){
	int arr[5][4]={{192,48,206,37},{147,90,312,21},{186,12,121,38},{114,21,408,39},{267,13,382,29}};
	Check_Winner1(arr);	
	Check_Winner2(arr);	
//	Check_Winner3(arr);
		
	return 0;
}

