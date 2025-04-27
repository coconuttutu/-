#pragma once
#include <stdexcept>
#include <iostream>

using namespace std;

class BankAccount
{
protected:
    double balance;

public:
    BankAccount(double b) : balance(b) {}

    virtual void withdraw(double amount) 
    {
        if (amount > balance) throw runtime_error("Недостаточный баланс");
        balance -= amount;
    }

    double getBalance() const {
        return balance;
    }

    virtual ~BankAccount() {};
};

