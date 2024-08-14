#include<stdio.h>


int main(){
	int itsnum;
	printf("Number Darj Karen: ");
	scanf("%d",&itsnum);
	int bit1 = itsnum%2;
	itsnum = itsnum/2;
	int bit2 = itsnum%2;
	itsnum = itsnum/2;
	int bit3 = itsnum%2;
	itsnum = itsnum/2;
	int bit4 = itsnum%2;
	itsnum = itsnum/2;
	int bit5 = itsnum%2;
	itsnum = itsnum/2;
	int bit6 = itsnum%2;
	itsnum = itsnum/2;
	int bit7 = itsnum%2;
	itsnum = itsnum/2;
	int bit8 = itsnum%2;
	itsnum = itsnum/2;
	printf("Before Checking %d %d %d %d %d %d %d %d",bit1,bit2,bit3,bit4,bit5,bit6,bit7,bit8);
	if ( bit4 ==1 || bit7 == 1 ){
		bit4=0;
		bit7=0;
		printf("\n After Checking %d %d %d %d %d %d %d %d",bit1,bit2,bit3,bit4,bit5,bit6,bit7,bit8);
	}
	else{
		printf("\nBits are already off");
	}
	
	

}
