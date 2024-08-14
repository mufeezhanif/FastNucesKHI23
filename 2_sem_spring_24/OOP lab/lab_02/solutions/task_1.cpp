#include <iostream>
using namespace std;


int lcm(int a,int b,int i){
 	
	if(a==1 && b==1){
		return 1;
	}
	else if(a%i==0 && b%i==0){
		return i* lcm(a/i,b/i,2);
	}
	else if(a%i==0){
		return i* lcm(a/i,b,2);
	}
	else if(b%i==0){
		return i* lcm(a,b/i,2);
	}
	else{
		return lcm(a,b,i+1);
	}
} 
int gcd(int a,int b,int i){
 	
	if(a%i==0 && b%i==0){
		return i;
	}
	else{
		return lcm(a,b,--i);
	}
}

int main() {
	int num1,num2;
	cout<<"Enter two numbers to calculate gcd: ";
	cin>>num1>>num2;
	if(num1>=num2) cout<<"\ngcd is: "<<gcd(num1,num2,num2)<<endl;
	else cout<<"\ngcd is: "<<gcd(num1,num2,num1)<<endl;
	cout<<"Enter two numbers to calculate lcm: ";
	cin>>num1>>num2;
	cout<<"\Lcm is "<<lcm(num1,num2,2) ;
	
	return 0;
}
