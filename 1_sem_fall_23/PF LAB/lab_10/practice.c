#include<stdio.h>
#include<stdlib.h>

int main(){
int i, n = 10;
int* ptr = (int*) malloc(n*sizeof(int));
//int *ptr = n;
for(i=0;i<n;i++)
{

printf("%d ", *(ptr+i));
}
free(ptr);
}