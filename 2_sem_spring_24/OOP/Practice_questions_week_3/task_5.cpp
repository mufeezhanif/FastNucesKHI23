#include<iostream>
using namespace std;

class AddAmount{
	public:
        int amount;
        AddAmount(){
            amount = 50;
        }
        AddAmount(int amount){
            this->amount=50;
            this->amount += amount;
        }

};

int main(){
    AddAmount a1,a2(100);

    cout<<"Amount of first object: "<<a1.amount<<endl;
    cout<<"Amount of second object: "<<a2.amount<<endl;


	return 0;
}