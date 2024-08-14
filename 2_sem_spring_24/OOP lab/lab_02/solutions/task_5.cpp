#include <iostream>
using namespace std;
typedef struct bankAccount{
	int accNumber;
	string accHolderName;
	int balance;
	
}ba; 
void dispDetails(ba *account){
	cout<<"\nAccount Number: "<<account->accNumber<<"\nAccount Holder Name: "<<account->accHolderName<<"\nCurrent account balance: "<<account->balance;
}
void deposit(ba *account){
	int amount;
	cout<<"\nEnter amount to deposit: ";
	cin.ignore();
	cin>>amount;
	account->balance +=amount;
	cout<<"New balance is : "<<account->balance;
};
void withdraw(ba *account){
	int amount;
	cout<<"\nEnter amount to withdraw: ";
	cin.ignore();
	cin>>amount;
	if(amount<=account->balance){
	account->balance -=amount;
	cout<<"New balance is : "<<account->balance;
	}
	else{
		cout<<"\n Insufficient Amount";
	}
}

int main()
{
	ba account;
	account.accNumber = 101;
	cout<<"Enter account holder Name: ";
	cin>>account.accHolderName;
	cout<<"Enter initial balance: ";
	cin.ignore();
	cin>>account.balance;
	int choice=0;
	
	while(choice!=4){
	cout<<"\n\n1 - Display account info \n2 - deposit\n3 - withdraw\n4 - exit:\n";
	cin>>choice;
	switch(choice){
		case 1:{
			dispDetails(&account);
			break;
		}
		case 2:{
			deposit(&account);
			break;
		}
		case 3:{
			withdraw(&account);
			break;
		}
	}
}
	return 0;
}

