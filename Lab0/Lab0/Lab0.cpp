#include <iostream>
#include <windows.h>
using namespace std;
class product
{
public:
    string name;
    int amount = 999;
    float cost = 999;
    void set(string A)
    {
        name = A;
    }
    void printemm()
    {
        cout << "Наименование  товара:   " << name << endl << "Количество  товара:     " << amount << endl << "Цена товара за единицу: " << cost << endl << endl;
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    product Cinproduct;
    product Blankproduct;
    Blankproduct.set("Пустой");
    cout << "Введите наименование товара: ";
    cin >> Cinproduct.name;
    cout << "Введите количество товара: ";
    cin >> Cinproduct.amount;
    cout << "Введите цену товара: ";
    cin >> Cinproduct.cost;
    cout << endl;
    Cinproduct.printemm();
    Blankproduct.printemm();

}
