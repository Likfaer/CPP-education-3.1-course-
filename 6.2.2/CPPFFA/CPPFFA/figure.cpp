#include "figure.h"

#define pi 3.14159265358979323846
double Figure::area(double x1)
{
    pl = pi * x1 * x1;
    return pl;
}
double Figure::area(double x1, double x2)
{
    pl = x1 * x2;
    return pl;
}
void Figure::show()
{
    cout << Fname << " | pl = " << pl << endl;
    cout << &Fname << " | " << &pl << endl;
}