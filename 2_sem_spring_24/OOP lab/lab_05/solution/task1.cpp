#include <iostream>
using namespace std;

class RealtorComission
{
public:
    double salesPrice;
    double commissionRate;
    double commission;

public:
    RealtorComission(double salesPrice, double commissionRate)
    {
        this->salesPrice = salesPrice;
        this->commissionRate = commissionRate;
        commission = salesPrice * commissionRate;
    }
    RealtorComission(int salesPrice, int commissionRate)
    {
        this->salesPrice = salesPrice;
        this->commissionRate = commissionRate / 100.0;
        commission = salesPrice * commissionRate;
    }
    void displayData()
    {
        cout << "\n\nDetails are given below: " << endl;
        cout << "Sales price: " << salesPrice << endl;
        cout << "commission Rate: " << commissionRate << endl;
        cout << "commission: " << commission << endl;
    }
};
int main()
{
    RealtorComission obj1(52.5, 0.2), obj2(5000,56);
    obj1.displayData();
    obj2.displayData();
    return 0;
}
