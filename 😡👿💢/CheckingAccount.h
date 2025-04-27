#pragma once
#include <stdexcept>
#include <iostream>
#include "BankAccount.h"

using namespace std;


class CheckingAccount : public BankAccount
{
public:
    CheckingAccount(double b) : BankAccount(b) 
    {
        balance = balance + 1000;
    
    }

    void withdraw(double amount) override
    {
        if (amount > balance) 
        {
            throw std::runtime_error("Недостаточно средств для снятия, превышен лимит овердрафта");
        }
        balance -= amount;
    }

};

