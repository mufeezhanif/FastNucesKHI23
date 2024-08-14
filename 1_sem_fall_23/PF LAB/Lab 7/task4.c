#include<stdio.h>
#include<math.h>
int main(){
	int index,i,temp,sum=0,digit=0;
	int num,decimal=10,remain=1;
	printf("Enter n: ");
	scanf("%d",&num);
//		COUNTING DIGITS OF GIVEN NUMBER
	
	while(remain!=0){
		remain = num/decimal;
		digit++;
		decimal *=10;
	}
	
	int arr[digit];
	int power = digit -1;
	decimal = pow(10,power);
	
//		APPENDING EACH DIGIT OF GIVEN NUMBER IN AN ARRAY

	for(i=1;i<=digit;i++){
		temp = num/decimal;
		num = num - (decimal*temp);
		index = i-1;
		arr[index]= temp;
		decimal /=10;
	}
//		SUM OF GIVEN NUMBER
	for(i=0;i<digit;i++){
		sum =sum + arr[i];
	}
	printf("\nsum: %d",sum);	
	return 0;
}
