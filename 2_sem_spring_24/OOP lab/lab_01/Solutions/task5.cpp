#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int m1[3][3],m2[3][3];
    int i,j;
    cout<<"\nEnter First Matrix: \n";
    for(i=0;i<3;++i){
        cout<<"Row "<<i+1 <<" ";
        for(j=0;j<3;++j){
            cin>>m1[i][j];
        }
    }
    
    cout<<"\nEnter Second Matrix: \n";
    for(i=0;i<3;++i){        cout<<"Row "<<i+1<<" ";
        for(j=0;j<3;++j){
            cin>>m2[i][j];
        }
    }
    
    cout<<"\nSubtracted Matrix:\n ";
    for(i=0;i<3;++i){
        for(j=0;j<3;++j){
            cout<<m1[i][j] - m2[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

