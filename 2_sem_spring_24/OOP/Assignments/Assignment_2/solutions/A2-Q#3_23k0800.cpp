#include <iostream>
#include <vector>
using namespace std;
class DarazPersonData
{
private:
    string firstName;
    string lastName;
    string address;
    string city;
    string state;
    string zip;
    string phone;

public:
    DarazPersonData(string firstName, string lastName, string address, string city, string state, string zip, string phone)
    {
        this->firstName = firstName;
        this->lastName = lastName;
        this->address = address;
        this->city = city;
        this->state = state;
        this->zip = zip;
        this->phone = phone;
    }
    string GetFirstName() const
    {
        return firstName;
    }

    void SetFirstName(string firstName)
    {
        this->firstName = firstName;
    }

    string GetLastName() const
    {
        return lastName;
    }

    void SetLastName(string lastName)
    {
        this->lastName = lastName;
    }

    string GetAddress() const
    {
        return address;
    }

    void SetAddress(string address)
    {
        this->address = address;
    }

    string GetCity() const
    {
        return city;
    }

    void SetCity(string city)
    {
        this->city = city;
    }

    string GetState() const
    {
        return state;
    }

    void SetState(string state)
    {
        this->state = state;
    }

    string GetZip() const
    {
        return zip;
    }

    void SetZip(string zip)
    {
        this->zip = zip;
    }

    string GetPhone() const
    {
        return phone;
    }

    void SetPhone(string phone)
    {
        this->phone = phone;
    }
};

class DarazCustomerData : public DarazPersonData
{
protected:
    const int customerNumber;
    int loyaltyPoints;
    static int n;

public:
    DarazCustomerData(string firstName, string lastName, string address, string city, string state, string zip, string phone) : DarazPersonData(firstName, lastName, address, city, state, zip, phone), customerNumber(n++), loyaltyPoints(0) {}

    void setLoyaltyPoints(int loyaltyPoints) { this->loyaltyPoints = loyaltyPoints; }
    int const GetcustomerNumber() const
    {
        return customerNumber;
    }

    int GetLoyaltyPoints() const
    {
        return loyaltyPoints;
    }
};
int DarazCustomerData::n = 1;
class DarazLoyaltyProgram
{
public:
    vector<DarazCustomerData> Customers;
    int temp;

public:
    void addNewCustomer(DarazCustomerData &c)
    {
        Customers.push_back(c);
        cout<<c.GetLastName()<<" has been added to the program successfully" << endl;
    }
    void addLoyaltyPoints(int cN, int points)
    {
        while (points < 0)
        {
            cout << "Enter valid points, i.e positive values" << endl;
            cin >> points;
        }
        for (int i = 0; i < Customers.size(); i++)
        {
            if (Customers[i].GetcustomerNumber() == cN)
            {
                temp = Customers[i].GetLoyaltyPoints();
                temp += points;
                Customers[i].setLoyaltyPoints(temp);
                cout << "Loyalty points added successfully" << endl;
                return;
            }
        }
        cout << "Customer not found" << endl;
    }
    void redeemLoyaltyPoints(int cN, int points)
    {
        while (points < 0)
        {
            cout << "Enter valid points, i.e positive values" << endl;
            cin >> points;
        }
        for (int i = 0; i < Customers.size(); i++)
        {
            if (Customers[i].GetcustomerNumber() == cN)
            {
                temp = Customers[i].GetLoyaltyPoints();
                temp -= points;
                Customers[i].setLoyaltyPoints(temp);
                cout << "Loyalty points redeemed successfully" << endl;
                return;
            }
        }

        cout << "Customer not found" << endl;
    }
    void displayLoyalPoints(int cN)
    {
        for (int i = 0; i < Customers.size(); i++)
        {
            if (Customers[i].GetcustomerNumber() == cN)
            {
                cout << "Total Points " << Customers[i].GetLoyaltyPoints() << endl;
                return;
            }
        }

        cout << "Customer not found" << endl;
    }
};
int main()

{
    cout << "Muhammad mufeez 23k0800" << endl;

    DarazCustomerData c1("Muhammad", "Mufeez", "123 Main Street", "Anytown", "CA", "12345", "123-456-7890");
    DarazCustomerData c2("John", "Doe", "456 Oak Street", "Anytown", "CA", "67890", "987-654-3210");
    DarazCustomerData c3("Jane", "Doe", "789 Elm Street", "Anytown", "CA", "23456", "555-555-5555");
    DarazLoyaltyProgram program;
    program.addNewCustomer(c1);
    program.addNewCustomer(c2);
    program.addNewCustomer(c3);
    program.addLoyaltyPoints(1, 100);
    program.addLoyaltyPoints(2, 200);
    program.addLoyaltyPoints(3, 300);
    program.displayLoyalPoints(1);
    program.redeemLoyaltyPoints(2, 50);
    program.displayLoyalPoints(2);
    return 0;
}