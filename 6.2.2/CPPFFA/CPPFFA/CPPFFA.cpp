#include "figure.h"
#include "Triangle.h"
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Circle A(1);
    Rectangl B(2);
    Rectangl C(2, 4);
    cout << "--3--" << endl;
    Figure T;
    T.show();
    cout << "--4--" << endl;
    Triangle Z(10, 20, 15); // 2.7
    Figure* mas[4] = { &A, &B, &C,&Z };
    for (int i = 0; i < 4; i++)
    {
        Figure& out = *mas[i];
        out.show();
    }
}