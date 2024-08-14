#include<stdio.h>

int main(){
	printf("k230800 Muhammad Mufeez \n\n");
	
	int i,j,k,l,n,num,l_side,r_side,temp,ret=0,arr[100],ind=0;
	printf("Enter n: ");
	scanf("%d",&n);
	num= n*n*n;
	temp =n*n*n;
	for(i=1;i<n;i++){
		for(j=i+1;j<n;j++){
			for(k=i+1;k<n;k++){
				for(l=i+1;l<n;l++){
						l_side = i*i*i + j*j*j;
						r_side= k*k*k + l*l*l;
						if(l_side>num){
							ret=1;
							break;
						}
						else if(l_side == r_side && l_side!=temp){
							temp = l_side;
							arr[ind]=l_side;
							ind++;
						}
						
					if(ret==1)
						break;
				}
				if(ret==1)
					break;
			}
			if(ret==1)
				break;
		}
		if(ret==1)
			break;
	}
	//sorting series in ascending order
	for(i=0;i<ind-1;i++){
		for(j=0;j<ind-1;j++){
			if(arr[j]>arr[j+1]){
			temp = arr[j+1];
			arr[j+1]=arr[j];
			arr[j]=temp;
			}
		}
	}
	//printing sorted series
	for(i=0;i<ind;i++){
		printf("%d, ",arr[i]);
	}
	printf("\b\b ");
	return 0;	
}
