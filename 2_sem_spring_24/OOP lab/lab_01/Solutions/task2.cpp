#include<iostream>
#include<math.h>
using namespace std;
double BMI(double weight,double height){
    return (weight/pow(height,2)) *703;
}

int main()
{
   double weight,height;
   cout<<"Enter your weight in pounds and height in inches\n";
   cin>>weight;
   cin>>height;
   cout<<"\n\n\t BMI: "<<BMI(weight,height);
   return 0;
}

