#include<iostream>
#include<math.h>
using namespace std;
void find_two_largest(int a[], int *largest,int*sLargest,int len);

int main()
{
   int i,size,largest,secondLargest;
   cout<<"Enter length of array: ";   cin>>size;
   int arr[size];
   for(i=0;i<size;++i){
       cout<<"Enter element "<<i+1<<endl;
       cin>>arr[i];
   }
   largest=secondLargest = arr[0];
   find_two_largest(arr,&largest,&secondLargest,size);
   cout<<"\n\nLargest is "<<largest<<"\nSecond Largest is "<<secondLargest;
   return 0;
}

void find_two_largest(int arr[], int *largest,int*sLargest,int len){
    int i=0,j,temp=0;
    while(i<len){
        j=0;
        while(j<len-1){
            if(arr[j]<arr[j+1]){
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1] =temp;
            }
          j++;
        }
        ++i;
    }
    
    *largest= arr[0];
    *sLargest = arr[1];
}
