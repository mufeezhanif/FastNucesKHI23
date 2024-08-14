#include<stdio.h>


void main(){
	int N,i;
//	to get values by user, remove vomments from lines 7 to 18, and comment out line 20 to 22
//	scanf("%d",&N);
//	char c_arr[N];
//	int arr[N];
//	long long int arr_l[N];
//	for(i=0;i<N;i++){
//		scanf(" %c",&c_arr[i]);
//	}
//	for(i=0;i<N;i++){
//		scanf("%d",&arr[i]);
//	}
//	for(i=0;i<N;i++){
//		scanf("%lld",&arr_l[i]);
//	}
	N=3;
	char c_arr[]={'c','h','i'};
	int arr[]={2,9,5};
	long long int arr_l[]={13654,223,372};
	
	char *c_arr1=&c_arr;
	int *arr1 = &arr;
	long long int *arr_l1=&arr_l;
	printf("For charArray:\n");
    for(i=0; i<N; i++){
        printf("Address: %d, Value: %c\n", &c_arr1[i], c_arr1[i]);
    }
    printf("\nFor intArray:\n");
    for(i=0; i<N; i++) {
        printf("Address: %d, Value: %d\n", &arr1[i], arr1[i]);
    }
    printf("\nFor longLongArray:\n");
    for(i=0; i<N; i++){
        printf("Address: %lld, Value: %lld\n", &arr_l1[i], arr_l1[i]);
    }
	
}
// showing different addresses is because of the size of different data types

