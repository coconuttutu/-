#pragma once
#include <iostream>
#include <fstream>
#include <stdexcept>
#include "FileHandler.h"

using namespace std;

class BinaryFileHandler : public FileHandler
{
public:
    BinaryFileHandler(const string& fname) : FileHandler(fname) {}

    void open() override 
    {
        cout << "Открытие бинарного файла..." << endl;
        FileHandler::open(); 
    }
};

