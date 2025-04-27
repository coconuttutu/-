#pragma once
#include <iostream>
#include <fstream>
#include <stdexcept>
using namespace std;


class FileHandler
{
protected:
	string filename;

public:
    FileHandler(const string& fname) : filename(fname) {}

    virtual void open() 
    {
        ifstream file(filename);
        if (!file) 
        {
            throw runtime_error("���� �� ������: " + filename);
        }
        cout << "���� ������: " << filename << endl;
        file.close();
    }

    virtual ~FileHandler() {}
};

