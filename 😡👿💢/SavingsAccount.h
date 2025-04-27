#pragma once
#include <stdexcept>
#include <iostream>
#include "BankAccount.h"

using namespace std;


class SavingsAccount : public BankAccount
{
public:
    SavingsAccount(double b) : BankAccount(b) 
    {
        balance = balance * 1.5;
    }

    void withdraw(double amount) override 
    {
        if (amount > balance)
            throw std::runtime_error("Недостаточно средств для снятия");
        balance -= amount;
    }

};

