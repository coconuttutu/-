#pragma once
#include "Shape.h"
#include <stdexcept>
class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) {
        if (w < 0 || h < 0) {
            throw std::invalid_argument("������ � (���) ������ �� ����� ���� ��������������.");
        }
        width = w;
        height = h;
    }

    double area() const override {
        return width * height; 
    }
};

