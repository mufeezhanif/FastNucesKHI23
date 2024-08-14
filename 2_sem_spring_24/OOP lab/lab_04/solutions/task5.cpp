#include <iostream>
#include <string>

using namespace std;

class phone
{
private:
    string part1;
    string part2;
    string part3;

public:
    phone(string number)
    {
        part1 = number.substr(0, 3);
        part2 = number.substr(2, 4);
        part3 = number.substr(7, 4);
    }
    void displaynum()
    {
        cout << "\nYour area code is: " << part1 << endl;
        cout << "\nYour Exchange is: " << part2 << endl;
        cout << "\nYour Consumer No is: " << part3 << endl;
    }
};

int main()
{
    string number;
    cout << "Please enter you number: ";
    cin >> number;
    phone num1(number);
    num1.displaynum();

    return 0;
}