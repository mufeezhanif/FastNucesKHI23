#include<stdio.h>

int main(){
	int i,j,x,y,each_branch,total_branch=0,mobile_sum,temp,max_bill_id,max_mobile_id;
	printf("Enter x: ");
	scanf("%d",&x);
	printf("Enter y: ");
	scanf("%d",&y);
	int bill[x][y];
	
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			printf("Enter of mobile phone %d of branch %d: ",i+1,j+1);
			scanf("%d",&bill[i][j]);
		}
	}
	printf("\n");
	
	for(i=0;i<x;i++){
		each_branch=0;
		for(j=0;j<y;j++){
			each_branch += bill[i][j];	
			if(each_branch>temp){
				max_bill_id = i+1;
			}
		}
		temp=each_branch;
		printf("\nSum of branch %d is: %d ",i+1,each_branch);	
		total_branch +=each_branch;
	}
	
	printf("\nSum of all branches is: %d ",total_branch);
	printf("\nBranch id of max bill is: %d ",max_bill_id);	
	temp=0;
	for(i=0;i<x;i++){
		mobile_sum=0;
		for(j=0;j<y;j++){
			mobile_sum+= bill[j][i];
			if(mobile_sum>temp){
				max_mobile_id = i+1;
			}
		}
		temp = each_branch;	
	}
	printf("\nMobile ids of highest of all mobiles: %d",max_mobile_id);
	

	
	return 0;
}