#pragma once
#include <stdexcept>
#include <iostream>
#include "Animal.h"

using namespace std;


class Dog : public Animal
{
private: string name;
public:
    Dog(const string& n) : name(n)
    {
        if (n.empty())
            throw invalid_argument("Имя не может быть пустым");
    }

    void speak() const override
    {
        cout << "Собачка по имени " << name << "говорит гав" << endl;
    }
};

