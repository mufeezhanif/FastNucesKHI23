#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string accountHolder;
    int balance; // in pkr thats y int

public:
    int GetAccountNumber()
    {
        return accountNumber;
    }

    void SetAccountNumber(int accNumber)
    {
        accountNumber = accNumber;
    }

    string GetAccountHolder()
    {
        return accountHolder;
    }

    void SetAccountHolder(string accHolder)
    {
        accountHolder = accHolder;
    }

    int GetBalance()
    {
        return balance;
    }

    void SetBalance(int amount)
    {
        balance = amount;
    }

    BankAccount(int accNumber, string accHolder, int amount) : accountNumber(accNumber), accountHolder(accHolder), balance(amount) {}

    void deposit(int amount)
    {
        balance += amount;
        cout << "amount added, new balance is: " << balance << endl;
    }

    void withdraw(int amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "\nnew balance is: " << balance << endl;
        }
        else
            cout << "\nInsufficient balance";
    }
    ~BankAccount()
    {
        cout << "\nDestructor has been called";
    }
};
int main()
{
    BankAccount acc1(1235, "Mufeez", 200);
    cout << "Account No: " << acc1.GetAccountNumber() << endl;
    cout << "Account holder Name: " << acc1.GetAccountHolder() << endl;
    cout << "Amount: " << acc1.GetBalance() << endl;

    acc1.deposit(5000);
    acc1.withdraw(500);
}