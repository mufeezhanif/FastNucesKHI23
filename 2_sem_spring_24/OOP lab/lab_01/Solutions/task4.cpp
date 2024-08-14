#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int arr[10],i;
    for(i=0;i<10;++i){
        cin>>arr[i];
    }
    cout<<"\nEntered Array is given below: \n";
    
    for(i=0;i<10;++i){
        cout<<arr[i]<<" ";
    }
    
    
    for(i=0;i<10;++i){
        if(arr[i]%2==0)
            arr[i]=1;
        else
            arr[i] =0;
    }
    cout<<"\nUpdated array is give below: \n";
    
    
    for(i=0;i<10;++i){
        cout<<arr[i]<<" ";
    }
    return 0;
}

