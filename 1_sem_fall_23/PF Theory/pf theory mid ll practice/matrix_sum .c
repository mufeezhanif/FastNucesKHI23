#include<stdio.h>

int main(){
	int i,j,input[5][5],filter[3][3],result[3][3];
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			int num=j;
			input[i][j]=(num+1);
			filter[i][j]=1;
		}
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d ",input[i][j]);
		}
		printf("\n");
	}
		printf("\n");
		printf("\n");
	
	int res_r=0,res_c=0,i_r,i_c,sum=0,f_r,f_c;
	
	for(i_r=0;i_r<3;i_r++){
		for(i_c=0;i_c<3;i_c++){
			sum =0;
			for(f_r=i_r;f_r<i_r+3;f_r++){
				for(f_c=i_c;f_c<i_c+3;f_c++){
					sum+= input[f_r][f_c];
				}
			}
			result[i_r][i_c]=sum;
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",result[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
