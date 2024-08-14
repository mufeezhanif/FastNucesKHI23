#include<stdio.h>
#include<stdlib.h>


//void mymalloc()
//{
//	int n = 3;
//	
//	int *ptr = (int*) malloc(n*sizeof(int));
//	
//	for(int i=0 ; i<n ; i++)
//	{
//		printf("\nAddress : %d and Value : %d",(ptr+i),*(ptr+i));
//	}
//	
//	
//	printf("\nNow Lets Have inputs from user \n");	
//	for(int i=0 ; i<n ; i++)
//	{
//		printf("Enter the Value at index  %d  = ",i);
//		scanf("%d",(ptr+i));	
//	}
//	
//	for(int i=0 ; i<n ; i++)
//	{
//		printf("\nAddress : %d and Value : %d",(ptr+i),*(ptr+i));	
//	}
//	
//	
//}
//
//void mycalloc()
//{
//	int n = 3;
//	
//	int *ptr = (int*) calloc(n,sizeof(int));
//	
//	for(int i=0 ; i<n ; i++)
//	{
//		printf("\nAddress : %d and Value : %d",(ptr+i),*(ptr+i));
//	}
//	
//	
//	printf("\nNow Lets Have inputs from user \n");	
//	for(int i=0 ; i<n ; i++)
//	{
//		printf("Enter the Value at index  %d  = ",i);
//		scanf("%d",(ptr+i));	
//	}
//	
//	for(int i=0 ; i<n ; i++)
//	{
//		printf("\nAddress : %d and Value : %d",(ptr+i),*(ptr+i));	
//	}
//}
//
//
//void myrealloc()
//{
//	
//	int n = 3;
//	int *ptr = (int*) calloc(n,sizeof(int));
//	printf("\nLets Have inputs from user \n");	
//	for(int i=0 ; i<n ; i++)
//	{
//		printf("Enter the Value at index  %d  = ",i);
//		scanf("%d",&ptr[i]);	
//	}
//	
//	for(int i=0 ; i<n ; i++)
//	{
//		printf("\nAddress : %d and Value : %d",(ptr+i),*(ptr+i));	
//	}
//	
//	n=1;
//	
//	ptr = (int*)realloc(ptr,n*sizeof(int));
//	printf("\nAfter reloc \n");	
//	for(int i=0 ; i<n ; i++)
//	{
//		printf("\nAddress : %d and Value : %d",(ptr+i),*(ptr+i));	
//	}
//
//}

void mydynamicTwoDarray()
{
	int i, j, rows = 2, cols = 3;

    // Allocate memory for the 2D array
    int **ptr = (int **)calloc(rows, sizeof(int *));
    for (i = 0; i < rows; i++){
        *(ptr + i) = (int *) calloc(cols, sizeof(int));
    }

    // Display initial values
    printf("Initial values:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", *(*(ptr + i) + j));
        }
        printf("\n");
    }

    // Input values into the array
    printf("Enter the elements of the array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", *(ptr + i) + j);
        }
    }

    // Display updated array
    printf("Updated array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", *(*(ptr + i) + j));
        }
        printf("\n");
    }

    // Free the allocated memory
    for (i = 0; i < rows; i++) {
        free(*(ptr + i));
    }
    free(ptr);

}


int main()
{
//	mymalloc();
//	mycalloc();
//	myrealloc();
	mydynamicTwoDarray();
	return 0;
}