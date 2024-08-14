#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,n,m,largest;
	scanf("%d",&n);
    int *ptr = (int *)calloc(n, sizeof(int));
    for(i=0;i<n;i++){
    	scanf("%d ",(ptr+i));
	}
	printf("\n\nEntered array:\n\n");
	for(i=0;i<n;i++){
    	printf("%d ",*(ptr+i));
	}
	
	printf("\nEnter new size of array: ");
	scanf("%d",&m);
	ptr = (int*)realloc(ptr,m*sizeof(int));
	for(i=n;i<m;i++){
		scanf("%d ",(ptr+i));
	}
	largest = *(ptr+0);
	for(i=0;i<m;i++){
    	if(*(ptr+i)>largest){
    		largest = *(ptr+i);
		}
	}
	
	printf("\nLargest num is : %d",largest);
	return 0;
}