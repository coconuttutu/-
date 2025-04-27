#pragma once
#include <stdexcept>
#include <iostream>
#include "Animal.h"

using namespace std;


class Cat : public Animal
{
private: string name;
public:
    Cat(const string& n) : name(n)
    {
        if (n.empty())
            throw invalid_argument("»м€ не может быть пустым");
    }

    void speak() const override
    {
        cout << " ошечка по имени " << name << "говорит м€у" << endl;
    }
};

