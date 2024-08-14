#include <iostream>
#include <string>

using namespace std;

class Furniture{
    private:    
        string name;
        int quantity;
        double price;
        public:
            Furniture(){}
            Furniture(string n, int q , int p):name(n), quantity(q), price(p){}
            void display(){
                cout<<"Name: "<<name <<endl;
                cout<<"Quantity: "<<quantity <<endl;
                cout<<"Price: "<<price <<endl;
            }
            Furniture operator+(Furniture &obj){

                Furniture temp;
                temp.name = name+ obj.name;
                temp.price = price+ obj.price;
                temp.quantity = quantity+ obj.quantity;
                return temp;
            }
};
int main()
{
    Furniture f1("Wooden Chair",10,50), f2("Glass Table",5,100);
    Furniture f3 = f1+ f2+f1+ f2+f1+ f2+f1+ f2+f1+ f2;
    f3.display();
    return 0;
}
//The original objects f1 and f2 remain unchanged