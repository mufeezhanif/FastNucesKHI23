#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	int i,j,m,n,k;
	scanf("%d%d",&m,&n);
	
	int ** ptr = (int**)calloc(m,sizeof(int*));
	for(i=0;i<m;i++){
		*(ptr+i) = (int*) calloc(n,sizeof(int));
	}
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",(*(ptr+i)+j));
		}
	}
	
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",*(*(ptr+i)+j));
		}
		printf("\n");
	}	
	
	 int org[m][n];
	 int t_l = ptr[0][0];
	int t_r = ptr[0][n-1];
	int b_l = ptr[m-1][0];
	int row = m+t_l+b_l;
	int col = n+t_r;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            org[i][j]=ptr[i][j];
            ptr[i][j]=0;
        }
    }
	
	printf("\n\n\t%d %d %d",t_l,t_r,b_l);
	
	ptr = (int**) realloc(ptr,row*sizeof(int*));
	for(i=0;i<row;i++){
		*(ptr+i) = (int*) realloc(*(ptr+i),col*sizeof(int));
	}
	
	for(i=t_l,k=0;i<t_l+m,k<m;i++,k++)
    {
        for(j=0;j<n;j++)
        {
            ptr[i][j]=org[k][j];
        }
    }
	
	
	printf("\n\tupdated\n\n\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d ",*(*(ptr+i)+j));
		}
		printf("\n");
	}
	
	for(i=0;i<m;i++){
		free(*(ptr+i));
	}
	free(ptr);
	return 0;
}