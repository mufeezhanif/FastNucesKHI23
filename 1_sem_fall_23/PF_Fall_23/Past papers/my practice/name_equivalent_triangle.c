#include<stdio.h>

int main()
{
    int i,j,k,l;
    char name[20]= {"UZAIR"};
    for(i=1; i<=5; i++)
    {
        k=1;
        l=0;
        for(j=1; j<=11; j++)
        {
            if(j>=7-i && j<=5+i && k)
            {
                printf("%c",name[l]);
                k=0;
                l++;
            }
            else
            {
                printf(" ");
                k=1;
            }
        }
        printf("\n");
    }
    return 0;
}