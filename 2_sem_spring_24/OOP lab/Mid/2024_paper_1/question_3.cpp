#include <iostream>
using namespace std;

class Basic
{
private:
    int balance;
    const string creationDate;
    int lastWithDrawal;
    string accountType;

public:
    int getBalance() { return balance; }
    int getLastWithDrawal() { return lastWithDrawal; }
    string getAccountType()
    {
        return accountType;
    }
    Basic(int b, const string d, string t) : balance(b), creationDate(d), lastWithDrawal(0), accountType(t) {}
    void deposit(int a)
    {
        a *= -1;
        balance += a;
    }
    void withdraw()
    {
        cout << "Enter the amount you want to withdraw : ";
        int amnt;
        cin >> amnt;
        if (balance >= amnt)
        {
            balance -= amnt;
            lastWithDrawal = amnt;
        }
        else
            cout << "\nInsufficient Balance\n";
    }
    ~Basic(){cout << "basic desctructor called"};
};

class SavingsAccount : public Basic
{
private:
    bool isInsured;
    string otherbenefits;

public:
    SavingsAccount(int b, const string d, string t) : Basic(b, d, t), isInsured(false), otherbenefits("Many more") {}
};
class insurance
{
    public:
        SavingsAccount *acc;
    insurance(SavingsAccount &a): acc(&a){}

    void checkEligibility(SavingsAccount &account`){
        if(account.getBalance() > 50)
    }
};
int main()
{
    return 0;
}
