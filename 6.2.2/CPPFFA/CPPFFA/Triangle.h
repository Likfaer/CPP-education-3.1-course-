#pragma once
#include "figure.h"
class Triangle : public Figure
{
public:
    Triangle(double aa, double bb, double cc)
    {
        cout << "Triang constructor" << endl;
        a = aa; b = bb; c = cc;
        Fname = "Triangle";
        if ((a + b - c > 0) and (a + c - b > 0) and (b + c - a > 0)) Geron(a, b, c);
        else { cout << "����������� �� ����������"; exit(0); }
    }
    double Geron(double a, double b, double c);
private:
    double a, b, c;
};