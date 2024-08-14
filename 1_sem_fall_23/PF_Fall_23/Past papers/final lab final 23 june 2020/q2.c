#include<Stdio.h>
#include<string.h>
#include<stdlib.h>
#define size 10
void use_array_to_pointer(double *arr1,double *arr2,int n1,int n2);
int main(){
	double arr2[size] = {-10.5,-1.8,3.5,6.3,7.2};
	double arr1[size]={-1.8,3.1,6.3,2.9,-6.5},tmp;
	int i,n2=5,j,n1=5,check =1;
//	printf("\n Enter sizes: ");
//	scanf("%d%d",&n1,&n2);
	fflush(stdin);
//	for(i=0;i<n1;i++){
//		arr1[i]=0;
//	}
//	for(i=0;i<n2;i++){
//		arr2[i]=0;
//	}
//	for(i=0;i<n1;i++){
//		fflush(stdin);
//		scanf("%lf",&tmp);
//		check=1;
//		for(j=0;j<i && check ==1;j++){
//			if(arr1[j]==tmp)
//				check =0;
//		}
//		if(check ==1){
//			arr1[i]=tmp;
//		}
//		else{
//			printf("this number is already entered, enter a new number");
//			i--;
//		}
//	}
	printf("\n Enter arr1: ");
	for(i=0;i<n1;i++){
		printf("%lf ",arr1[i]);
	}
	printf("\n Enter arr2: ");
	for(i=0;i<n2;i++){
		printf("%lf ",arr2[i]);
	}
//	for(i=0;i<n2;i++){
//		fflush(stdin);
//		scanf("%lf",&tmp);
//		check=1;
//		for(j=0;j<i && check ==1;j++){
//			if(arr2[j]==tmp)
//				check =0;
//		}
//		if(check ==1){
//			arr2[i]=tmp;
//		}
//		else{
//			printf("this number is already entered, enter a new number");
//			i--;
//		}
//	}
	use_array_to_pointer(arr1,arr2,n1,n2);

	
	return 0;
}


void use_array_to_pointer(double *arr1,double *arr2,int n1,int n2){
	int i,j,num,ind=0,check=0,flag;
	printf("\n\n Enter arr1: ");
	for(i=0;i<n1;i++){
		printf("%lf ",*(arr1+i));
	}
	printf("\n Enter arr2: ");
	for(i=0;i<n2;i++){
		printf("%lf ",arr2[i]);
	}
	double tmp;
	double r_arr[size];
	if(n1>n2){
		num=n1;
		for(i=0;i<num;i++){
			flag =0;
			if(n2>i)
				flag=1;
		switch(flag){
			case 1:{
				if(*(arr1+i)==*(arr2+i)){
					check =1;
					tmp = *(arr1+i);
					printf("\n\n\t\t%lfhello",tmp);
					for(j=0;j<ind && check ==1;j++){
						if(r_arr[j]==tmp)
							check =0;
						}
						if(check ==1){
							r_arr[ind]=tmp;
							++ind;
						}
				}	
				else if(*(arr1+i)>*(arr2+i)){
					printf("\n n1 : %d",i);
					check =1;
					tmp = *(arr2+i);
					for(j=0;j<ind && check ==1;j++){
						if(r_arr[j]==tmp)
							check =0;
						}
						if(check ==1){
							r_arr[ind]=tmp;
							++ind;
						}
					
					check =1;
					tmp = *(arr1+i);
					for(j=0;j<ind && check ==1;j++){
						if(r_arr[j]==tmp)
							check =0;
						}
						if(check ==1){
							r_arr[ind]=tmp;
							++ind;
						}
					}
					else if(*(arr2+i)>*(arr1+i)){
						printf("\n n2 : %d",i);
					check =1;
					tmp = *(arr1+i);
					for(j=0;j<ind && check ==1;j++){
						if(r_arr[j]==tmp)
							check =0;
						}
						if(check ==1){
							r_arr[ind]=tmp;
							++ind;
						}
					
					check =1;
					tmp = *(arr2+i);
					for(j=0;j<ind && check ==1;j++){
						if(r_arr[j]==tmp)
							check =0;
						}
						if(check ==1){
							r_arr[ind]=tmp;
							++ind;
						}
					}
				
	
				break;
			}
			
			case 0:{
				check =1;
				tmp = *(arr1+i);
					printf("\n\t n1");
				for(j=0;j<ind && check ==1;j++){
					if(r_arr[j]==tmp)
						check =0;
				}
				if(check ==1){
					r_arr[ind]=tmp;
					++ind; 
				}	
				break;
			}
	}
	}
	}
		
	
	else if(n2>n1){
		num =n2;
		for(i=0;i<num;i++){
		flag=0;
		if(n1>i)
			flag=1;
		switch(flag){
			case 1:{
				if(*(arr1+i)==*(arr2+i)){
					check =1;
					tmp = *(arr1+i);
					for(j=0;j<ind && check ==1;j++){
						if(r_arr[j]==tmp)
							check =0;
						}
						if(check ==1){
							r_arr[ind]=tmp;
							++ind;
						}
				}	
				else if(*(arr1+i)>*(arr2+i)){
					check =1;
					tmp = *(arr2+i);
					for(j=0;j<ind && check ==1;j++){
						if(r_arr[j]==tmp)
							check =0;
						}
						if(check ==1){
							r_arr[ind]=tmp;
							++ind;
						}
					
					tmp = *(arr1+i);
					for(j=0;j<ind && check ==1;j++){
						if(r_arr[j]==tmp)
							check =0;
						}
						if(check ==1){
							r_arr[ind]=tmp;
							++ind;
						}
					}
				
	
				break;
			}
			
			case 0:{
				check =1;
				tmp = *(arr2+i);
				for(j=0;j<ind && check ==1;j++){
					if(r_arr[j]==tmp)
						check =0;
				}
				if(check ==1){
					r_arr[ind]=tmp;
					++ind;
				}	
				break;
			}
	}
	}
		
	
	}
		
	else{
		num = n1;
	int check =1;
	for(i=0;i<num;i++){
		if(*(arr1+i)==*(arr2+i)){
			check =1;
			tmp = *(arr1+i);
			for(j=0;j<ind && check ==1;j++){
				if(r_arr[j]==tmp)
					check =0;
				}
				if(check ==1){
					r_arr[ind]=tmp;
					++ind;
				}
			}
		else if(*(arr1+i)>*(arr2+i)){
			check =1;
			tmp = *(arr2+i);
			for(j=0;j<ind && check ==1;j++){
				if(r_arr[j]==tmp)
					check =0;
				}
				if(check ==1){
					r_arr[ind]=tmp;
					++ind;
				}
			check=1;
			tmp = *(arr1+i);
			for(j=0;j<ind && check ==1;j++){
				if(r_arr[j]==tmp)
					check =0;
				}
				if(check ==1){
					r_arr[ind]=tmp;
					++ind;
			}
		}
		else if(*(arr2+i)>*(arr1+i)){
					check =1;
					tmp = *(arr1+i);
					for(j=0;j<ind && check ==1;j++){
						if(r_arr[j]==tmp)
							check =0;
						}
						if(check ==1){
							r_arr[ind]=tmp;
							++ind;
						}
					
					check =1;
					tmp = *(arr2+i);
					for(j=0;j<ind && check ==1;j++){
						if(r_arr[j]==tmp)
							check =0;
						}
						if(check ==1){
							r_arr[ind]=tmp;
							++ind;
						}
					}
		
	}
}

	printf("\n\n\n");
	for(i=0;i<ind;i++){
		printf("%.1lf ",r_arr[i]);
	}
}