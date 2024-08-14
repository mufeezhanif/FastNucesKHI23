#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct {
	char id[9];
	char name[15];
	int s1;
	int s2;
	int s3;
} std;
int main(){
	int n;
	std *ptr;
	int n_rec,i;
	scanf("%d",&n);
	switch(n){
		case 1:{
			printf("\nare ypu sure to delete all preivous record?\n");
			char ch = getchar();
			if(ch =='y'){
				FILE *fptr = fopen("c_data.txt","w");
				printf("\nEnter no of records to be entered: ");
				
				scanf("%d",&n_rec);
				ptr = (std *) malloc(n_rec*sizeof(std));
				for(i=0;i<n_rec;++i){
					printf("\nFor std %d",i+1);
					fflush(stdin);
					printf("\n\tEnter Id: ");
					gets(ptr[i].id);
					puts(ptr[i].id);
					fflush(stdin);
					printf("\n\tEnter Name: ");
					gets(ptr[i].name);
					puts(ptr[i].name);
					fflush(stdin);
					printf("\n\tEnter marks of three subjects: ");
					scanf("%d%d%d",&ptr[i].s1,&ptr[i].s2,&ptr[i].s3);
					printf("%d%d%d",ptr[i].s1,ptr[i].s2,ptr[i].s3);
					fprintf(fptr,"%s %s %d %d %d\n",ptr[i].id,ptr[i].name,ptr[i].s1,ptr[i].s2,ptr[i].s3);
//					fwrite(&ptr[i],sizeof(std),1,fptr);
				}
			fclose(fptr);
			}
			else{
				 break;
				
			}
			break;
		}
		case 2:{
			FILE *fptr1 = fopen("c_data.txt","r");
			int length=0;
			
			printf("%d",length);
//			length =0;
			char buf;int j=0;char buffer[100];
			while(buf!=EOF){	
				buf = fgetc(fptr1);
				if(buf=='\n')
					++length;
			}
			printf("      %d %d",ftell(fptr1),sizeof(buf));
			rewind(fptr1);
//			length = sizeof(buffer+1)/sizeof(std);
			printf("      %d",length);
			int i;
			std tmp;
			for(i=0;i<length;++i){
//				fread(&tmp,sizeof(std),1,fptr1);
				fscanf(fptr1,"%s %s %d %d %d",tmp.id,tmp.name,&tmp.s1,&tmp.s2,&tmp.s3);
				printf("\n%s %s %d %d %d",tmp.id,tmp.name,tmp.s1,tmp.s2,tmp.s3);
			}
			fclose(fptr1);
			break;
		}
		case 3:{
			break;
		}
		case 4:{
			break;
		}
		case 5:{
			break;
		}
		case 6:{
			break;
		}
		case 7:{
			break;
		}
	}
	
	return 0;
}