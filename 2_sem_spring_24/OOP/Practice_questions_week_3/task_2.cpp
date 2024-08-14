#include<iostream>
using namespace std;

class CustomerAccount{
	private:
        string name;
        string accountType;
        int accountNumber;
        double balance;
	public:
		CustomerAccount(){
            name = "Mufeez";
            accountType = "current";
            accountNumber = 4321;
            balance= 5000;
        }
        void setInitialAmount(int balance){
            this->balance += balance;
        }
        void withDrawAmount(){
            int amount;
            cout<<"\nEnter amount to be withdrawn: ";
            cin>>amount;
            if(amount>25000){
                cout<<"\nEnter amount less than 25000";
                withDrawAmount();
            }
            else if(amount>this->balance) cout<<"\nInsufficient Balance";
            else {
                cout<<"\nwithdraw successful";
                this->balance -= amount;
            }
        }
        void printInfo(){
            cout<<"\nAccount holder Name: "<<this->name<<endl;
            cout<<"Account balance: "<<this->balance;
        }

};

int main(){
    CustomerAccount acc1;
    acc1.setInitialAmount(50000); 
    acc1.withDrawAmount();
    acc1.printInfo();
	return 0;
}