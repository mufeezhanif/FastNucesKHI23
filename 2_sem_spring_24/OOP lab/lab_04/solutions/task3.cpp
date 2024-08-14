#include <iostream>
#include <cmath>
using namespace std;

class Sales
{
private:
    int SaleID;
    string ItemName;
    int Quantity;

public:
    int GetSaleID()
    {
        return SaleID;
    }

    void SetSaleID(int SID)
    {
        SaleID = SID;
    }

    string GetItemName()
    {
        return ItemName;
    }

    void SetItemName(string name)
    {
        ItemName = name;
    }

    int GetQuantity()
    {
        return Quantity;
    }

    void SetQuantity(int quantity)
    {
        Quantity = quantity;
    }
    Sales() : Quantity(500), ItemName("Brush"), SaleID(235) {}

    Sales(int quantity, int saleid, string name) : Quantity(quantity), ItemName(name), SaleID(saleid) {}
    Sales(const Sales &tmpobj) : SaleID(tmpobj.SaleID), Quantity(tmpobj.Quantity), ItemName(tmpobj.ItemName) {}

    void displayData()
    {

        cout << "\n Data is given below";
        cout << " sale Id: " << SaleID << endl;
        cout << "item name: " << ItemName << endl;
        cout << " quantity: " << Quantity << endl;
    }

    ~Sales()
    {
        cout << "\nDestructor has been called";
    }
};
int main()
{
    Sales obj1, obj2(200, 231, "Toothpaste"), obj3(obj1);

    obj1.displayData();
    obj2.displayData();
    obj3.displayData();
}