#include<iostream>
using namespace std;
void addFunds(int *funds){
    int amount;
    cout<<"Enter amount to deposit: "<<endl;
    cin>>amount;
    *funds += amount;
    cout<<"Deposit Successful. Your new balance is "<<*funds<<endl;
}
void withdrawFunds(int *funds){
    int amount;
    cout<<"Enter amount to withdraw: "<<endl;
    cin>>amount;
    if(amount<*funds){
    *funds -= amount;
    cout<<"Withdraw Successful. Your new balance is "<<*funds<<endl;
    }
    else{
        cout<<"Insufficient Balance, your balance is "<<*funds<<endl;
        
    }
}

int main()
{
    int choice,funds = 0;
    do{
        
    
    cout<<"\n\t\t\tWelcome to Banking System"<<endl<<"\t1. Deposit Funds"<<endl;
    cout<<"\t2. Withdraw Funds"<<endl<<"\t3. Exit"<<endl;
    cout<< "\tEnter Your Choice: ";
    cin>>choice;
    switch(choice){
        case 1:{
            addFunds(&funds);
            break;
        }
        case 2:{
            withdrawFunds(&funds);
            break;
        }
        deault:{
        cout<<"THanks for using our bank system ";
        }
    }
}while(choice != 3);
    return 0;
}

