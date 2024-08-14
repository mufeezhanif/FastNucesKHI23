#include <iostream>

// Abstract class Bank
class Bank {
public:
    // Abstract method getBalance
    virtual double getBalance() const = 0;
};

// Subclass BankA
class BankA : public Bank {
private:
    double balance;
public:
    BankA(double initialBalance) : balance(initialBalance) {}

    // Implementation of getBalance for BankA
    double getBalance() const override {
        return balance;
    }
};

// Subclass BankB
class BankB : public Bank {
private:
    double balance;
public:
    BankB(double initialBalance) : balance(initialBalance) {}

    // Implementation of getBalance for BankB
    double getBalance() const override {
        return balance;
    }
};

// Subclass BankC
class BankC : public Bank {
private:
    double balance;
public:
    BankC(double initialBalance) : balance(initialBalance) {}

    // Implementation of getBalance for BankC
    double getBalance() const override {
        return balance;
    }
};

int main() {
    // Creating objects for each bank
    BankA bankA(100);
    BankB bankB(150);
    BankC bankC(200);

    // Calling getBalance for each bank and printing the result
    std::cout << "Balance in Bank A: $" << bankA.getBalance() << std::endl;
    std::cout << "Balance in Bank B: $" << bankB.getBalance() << std::endl;
    std::cout << "Balance in Bank C: $" << bankC.getBalance() << std::endl;

    return 0;
}

