// #include <iostream>
// using namespace std;
// class Student
// {
// protected:
//     int rno;

// public:
//     void
//     get_no(int a)
//     {
//         rno = a;
//     }
//     void put_no(void)
//     {
//         cout << "Roll no " << rno << "\n ";
//     }
// };

// class Test : public Student
// {
// protected:
//     float part1, part2;

// public:
//     void get_mark(float x, float y)
//     {
//         part1 = x;
//         part2 = y;
//     }
//     void
//     put_marks()
//     {
//         cout << "Marksobtained:\npart1=" << part1 << "\
// n"
//              << "part2=" << part2 << "\n";
//     }
// };

// class Sports
// {
// protected:
//     float score;

// public:
//     void getscore(float s)
//     {
//         score = s;
//     }
//     void putscore()
//     {
//         cout << "sports:" << score << "\n";
//     }
// };

// class Result : public Test, public Sports
// {
//     float total;

// public:
//     void display()
//     {
//         total = part1 + part2 + score;
//         put_no();
//         put_marks();
//         putscore();
//         cout << "Total Score=" << total << "\n";
//     }
// };

// main()

// {

//     Result stu;
//     stu.get_no(123);

//     stu.get_mark(27.5, 33.0);
//     stu.getscore(6.0);

//     stu.display();
//     return 0;
// }

// #include <iostream> #include<string>
// using namespace std;
// class Account
// {
// private:
//     long accountNumber; // Account
// protected:
//     string name;              // Account holder
// public:                       // Public interface:
//     const string accountType; // Account Type
//     Account(long accNumber, string accHolder, const string &accType)
//         : accountNumber(accNumber), name(accHolder), accountType(accType)
//     {
//         cout << "Account's constructor has been called" << endl
//              << endl;
//     }
//     ~Account() // Destructor
//     {
//         cout << endl
//              << "Object Destroyed";
//     }
//     const long getAccNumber() const // accessor for privately defined data menber;

//     {
//         return accountNumber;
//     }
//     void DisplayDetails()
//     {
//         cout << "Account Holder: " << name << endl;
//         cout << "Account Number: " << accountNumber << endl;
//         cout << "Account Type: " << accountType << endl;
//     }
// };
// class CurrentAccount : public Account // Single

// {
// private:
//     double balance;

// public:
//     CurrentAccount(long accNumber, const string &accHolder, string accountType, double accBalance)
//         : Account(accNumber, accHolder, accountType), balance(accBalance)
//     {
//         cout << "CurrentAccount's constructor has been called" << endl
//              << endl;
//     }
//     void deposit_currbal()
//     {
//         float
//             deposit;
//         cout << "Enter amount to Deposit : ";
//         cin >> deposit;
//         cout << endl;
//         balance = balance + deposit;
//     }
//     void Display()
//     {
//         name = "Dummy"; // can change protected data member of Base class DisplayDetails();
//         cout << "Account Balance: " << balance << endl
//              << endl;
//     }
// };
// int main()
// {
//     CurrentAccount currAcc(7654321, "Dummy1", "Current Account", 1000);
//     currAcc.deposit_currbal();
//     currAcc.Display();
//     return 0;
// }

#include <iostream>
using namespace std;
class FirstBase
{
protected:
    int a;

public:
    FirstBase(int x)
    {
        cout << "Constructor of FirstBase is called: " << endl;
        a = x;
    }
};
class SecondBase
{
protected:
    string b;

public:
    SecondBase(string x)
    {
        cout << "Constructor of SecondBase is called: " << endl;
        b = x;
    }
};
class Derived : public FirstBase, public SecondBase
{
public:
    Derived(int a, string b) : FirstBase(a), SecondBase(b)
    {
        cout << "Child Constructor is called: " << endl;
    }
    void display()
    {
        cout << a << " " << b << endl;
    }
};
int main()
{
    Derived obj(24, "Multiple Inheritance");
    obj.display();
}