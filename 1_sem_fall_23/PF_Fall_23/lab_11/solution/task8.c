#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct boxes{
	int length;
	int width;
	int height;
};

int main(){
	int i,n,skip,volume;
	printf("Enter Number of Boxes: ");
	scanf("%d",&n);
	struct boxes arr[n];
	
	for(i=0;i<n;i++){
		printf("\n\nFor box %d: ",i+1);
		scanf("%d%d%d",&arr[i].length,&arr[i].width,&arr[i].height);
	}
	for(i=0;i<n;i++){
		skip =0;
		if(arr[i].length==0 || arr[i].width==0 || arr[i].height==0){
			skip=1;
		}
		if(arr[i].height<41 && skip ==0){
			volume= arr[i].length*arr[i].width*arr[i].height;
			printf("\n%d",volume);
		}
	}
	
	
	
	
	return 0;
}