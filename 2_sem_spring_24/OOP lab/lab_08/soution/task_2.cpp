#include <iostream>
#include <string>

using namespace std;
class Account
{
protected:
    double balance;

public:
    Account(double init_balance)
    {
        if (init_balance < 0.0)
        {
            cout << "Entered balance was negative" << endl;
            balance = 0.0;
        }
        else
        {
            balance = init_balance;
        }
    }

    void credit(double amt)
    {
        balance += amt;
        cout << "Funds added successfully" << endl;
    }
    bool debit(double amt,double fee=0.0)
    {
        if (balance >= (amt+fee))
        {
            balance -= amt;
            cout << "Amount deducted" << endl;
            return true;
        }
        else
        {
            cout << "Debit Amount exceeded account balance" << endl;
            return false;
        }
    }
    double getBalance() const { return balance; }
};

class SavingsAccount : public Account
{
private:
    double interestRate; // in percentage
public:
    double GetInterestRate() const
    {
        return interestRate;
    }

    void SetInterestRate(double interestRate)
    {
        this->interestRate = interestRate;
    };

    SavingsAccount(double balance, double intRate) : Account(balance), interestRate(intRate) {}
    double calculateInterest()
    {
        return (getBalance() * interestRate / 100);
    }
};
class CheckingAccount : public Account
{
private:
    double feePerTransaction;

public:
    CheckingAccount(double bal, double fees) : Account(bal), feePerTransaction(fees) {}
    void credit(double amt)
    {
        Account::credit(amt);
        balance -= feePerTransaction;
    }
    void debit(double amt)
    {
            bool temp = Account::debit(amt,feePerTransaction);
            if (temp)
            {
                balance -= feePerTransaction;
            }
     
    }
};
int main()
{
    SavingsAccount sAcc(500, 20.5);
    bool newAmount = sAcc.calculateInterest();
    sAcc.credit(newAmount);
    sAcc.debit(newAmount);

    CheckingAccount cAcc(310, 5);
    cAcc.debit(400);
    cAcc.credit(100);
    cAcc.debit(400);
    return 0;
}