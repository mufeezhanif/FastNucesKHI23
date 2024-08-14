#include <iostream>
using namespace std;

class RentalCalculator
{
public:
    static float rentPerDay;
    const string customerName;
    int numberOfDays;
    float customerRent;

public:
    RentalCalculator(string Name, int number) : customerName(Name), numberOfDays(number) {}
    void RentWithDiscount()
    {
        customerRent = (numberOfDays * rentPerDay) - rentPerDay;
    }
    void RentWithoutDiscount()
    {
        customerRent = (numberOfDays * rentPerDay);
    }
    void displayRent()
    {
        if (numberOfDays > 7)
            this->RentWithDiscount();
        else
            this->RentWithoutDiscount();
        cout << "\nRental Amount: " << customerRent << endl;
    }
};
float RentalCalculator::rentPerDay = 50.75;

int main()
{
    RentalCalculator obj("Mufeez",7),obj1("Junaid",8);
    cout<<"\nCustomer Name: "<<obj.customerName;
    cout<<"\nRental Days: "<<obj.numberOfDays;
    obj.displayRent();

    cout<<"\nCustomer Name: "<<obj1.customerName;
    cout<<"\nRental Days: "<<obj1.numberOfDays;
    obj1.displayRent();


    return 0;
}
