#include <iostream>
#include <stdexcept>
#include "Circle.h"
#include "Rectangle.h"
#include "Cat.h"
#include "Dog.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include "TextFileHandler.h"
#include "BinaryFileHandler.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "ru-RU");

    int n;

    cout << "Введите номер задания: ";
    cin >> n;

    switch (n)
    {

    case 1:
    {
        int r, x, y;
        cout << "Введите радиус окружности: ";
        cin >> r;

        try
        {
            Circle circle(r);
            cout << "Площадь круга: " << circle.area() << endl;

        }
        catch (const std::invalid_argument& e)
        {
            cerr << "Ошибка: " << e.what() << endl;
        }

        cout << "Введите стороны прямоугольника: ";
        cin >> x >> y;


        try 
        {

            Rectangle rectangle(x, y);
            cout << "Площадь прямоугольника: " << rectangle.area() << endl;
        }
        catch (const std::invalid_argument& e) 
        {
            cerr << "Ошибка: " << e.what() << endl;
        }

        break;
    }

    case 2:
    {
        string name;

        cout << "Введите имя кошечки: ";
        cin >> name;

        try
        {
            Cat cat(name);
            cat.speak();

        }
        catch (const std::invalid_argument& e)
        {
            cerr << "Ошибка: " << e.what() << endl;
        }

        cout << "Введите имя собачки: ";
        cin >> name;

        try
        {
            Dog dog(name);
            dog.speak();

        }
        catch (const std::invalid_argument& e)
        {
            cerr << "Ошибка: " << e.what() << endl;
        }

        break;
    }

    case 3:
    {
        double balance, amount;

        cout << "Введите баланс сберегательного счёта: ";
        cin >> balance;

        cout << "Какую сумму вы хотите снять?: ";
        cin >> amount;

        try
        {
            SavingsAccount savacc(balance);
            savacc.withdraw(amount);
            cout << "Баланс: " << savacc.getBalance() << endl;
        }
        catch (const std::invalid_argument& e)
        {
            cerr << "Ошибка: " << e.what() << endl;
        }
        

        cout << "Введите баланс текущего счёта: ";
        cin >> balance;

        cout << "Какую сумму вы хотите снять?: ";
        cin >> amount;

        try
        {
            CheckingAccount checkacc(balance);
            checkacc.withdraw(amount);
            cout << "Баланс: " << checkacc.getBalance() << endl;
        }
        catch (const std::invalid_argument& e)
        {
            cerr << "Ошибка: " << e.what() << endl;
        }

        break;
    }
    case 4:
    {
        try {
            TextFileHandler textFile("test.txt");
            textFile.open(); 

            BinaryFileHandler binaryFile("test.bin");
            binaryFile.open(); 
        }
        catch (const std::exception& e) {
            std::cerr << "Ошибка: " << e.what() << std::endl;
        }
        break;
    }

    case 5:
    {

        break;
    }
    default:
        cout << "Такого задания нет! ";
        break;
    }



    return 0;
}