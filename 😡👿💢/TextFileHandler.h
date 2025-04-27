#pragma once
#include <iostream>
#include <fstream>
#include <stdexcept>
#include "FileHandler.h"

using namespace std;


class TextFileHandler : public FileHandler
{
public:
    TextFileHandler(const string& fname) : FileHandler(fname) {}

    void open() override 
    {
        cout << "Открытие текстового файла..." << endl;
        FileHandler::open(); 
    }
};

