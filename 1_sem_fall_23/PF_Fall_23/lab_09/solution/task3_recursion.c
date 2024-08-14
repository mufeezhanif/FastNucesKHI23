#include<stdio.h>

int Gcd(int a,int b) {
    while (b != 0) {
        int temp=b;
        b = a%b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    scanf("%d ",&num1);
	scanf("%d", &num2);
 
    int gcd = Gcd(num1,num2);
    
    printf("GCD of %d and %d is %d\n",num1,num2,gcd);
    
    return 0;
}
