#include<stdio.h>
#define size 10

void sub_matrix_2(int sub_matrix[][size],int n,int max[][size],char id[10]);
void sub_matrix_4(int sub_matrix[][size],int n,int max[][size],char id[10]);
void sub_matrix_8(int sub_matrix[][size],int n,int max[][size],char id[10]);
void fill_data(int matrix[][size],int n,char id[10]);
	
int main(){
	printf("23k-0800_Muhammad_Mufeez\n\n\n");
	int i,j,k,l;
	int max[size][size];
	int max_local[size][size];
	printf("\nEnter id in form of ***-****: ");
	char id[10];
	fflush(stdin);
	gets(id);
	//for 2x2 matrix
	sub_matrix_2(max_local,2,max,id);
	//for 4x4 matrix
	sub_matrix_4(max_local,4,max,id);
	//for 8x8 matrix
	sub_matrix_8(max_local,8,max,id);
	return 0;
} 

void fill_data(int matrix[][size],int n,char id[10]){
	
	int arr[4],i,j,k;
	for(i=4 ,j=0;i<8,j<4;i++,j++){
		arr[j]= id[i] -'0';
	}
	
	printf("\n\n");
	
	for(i=0,k=0;i<n;i++){
		for(j=0;j<n;j++,k++){
			if(k==4)
				k=0;
			matrix[i][j]=arr[k];
			
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
}
void sub_matrix_2(int sub_matrix[][size],int n,int max[][size],char id[10]){
	int sm_size = n/2;
	int x=0,y=0,i,j,max_val=0,k,l;
	
	fill_data(max,n,id);
	for(i=0, x=0;i<=sm_size+2;i+=2,x++){
		for(j=0,y=0;j<=sm_size+2;j+=2,y++){
			max_val=0;
			for(k=i;k<i+2;k++){
				for(l=j;l<j+2;l++){
					if(max[k][l]>max_val){
						max_val= max[k][l];
					}					
				}
			}
			sub_matrix[x][y] = max_val;	
		}
	}
	
	printf("\n\n\tFor 2x2: \n");
	for(i=0;i<sm_size;i++){
		for(j=0;j<sm_size;j++){
		printf("%d ",sub_matrix[i][j]);}
		printf("\n");
	}
}
void sub_matrix_4(int sub_matrix[][size],int n,int max[][size],char id[10]){
	int sm_size = n/2;
	int x=0,y=0,i,j,max_val=0,k,l;
	fill_data(max,n,id);
	for(i=0, x=0;i<=sm_size+2;i+=2,x++){
		for(j=0,y=0;j<=sm_size+2;j+=2,y++){
			max_val=0;
			for(k=i;k<i+2;k++){
				for(l=j;l<j+2;l++){
					if(max[k][l]>max_val){
						max_val= max[k][l];
					}					
				}
			}
			sub_matrix[x][y] = max_val;	
		}
	}
	
	printf("\n\n\tFor 4x4: \n");
	for(i=0;i<sm_size;i++){
		for(j=0;j<sm_size;j++){
		printf("%d ",sub_matrix[i][j]);}
		printf("\n");
	}
}
void sub_matrix_8(int sub_matrix[][size],int n,int max[][size],char id[10]){
	int sm_size = n/2;
	int x=0,y=0,i,j,max_val=0,k,l;
	
	fill_data(max,n,id);
	for(i=0, x=0;i<=sm_size+2;i+=2,x++){
		for(j=0,y=0;j<=sm_size+2;j+=2,y++){
			max_val=0;
			for(k=i;k<i+2;k++){
				for(l=j;l<j+2;l++){
					if(max[k][l]>max_val){
						max_val= max[k][l];
					}					
				}
			}
			sub_matrix[x][y] = max_val;	
		}
	}
	
	printf("\n\n\tFor 8x8: \n");
	for(i=0;i<sm_size;i++){
		for(j=0;j<sm_size;j++){
		printf("%d ",sub_matrix[i][j]);}
		printf("\n");
	}
}
