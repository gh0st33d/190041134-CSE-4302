#include <bits/stdc++.h>
using namespace std;
class Medicine
{

    double discountPercent, unitPrice;
    char name[50], genericName[50];

public:
    Medicine() : unitPrice(0), discountPercent(5) {}

    void assignName(char nameinp[], char genericNameinp[])
    {
        strcpy(name, nameinp);
        strcpy(name, genericNameinp);
    }

    void assignPrice(double price)
    {
        if (price < 0)
        {
            cout << "Can't be negative price!\n";
        }
        else{
            unitPrice = price;
        }
    }

    void setDiscountPercent(double percent)
    {
        if (percent < 0 or percent > 45)
        {
           cout << "Out of range discount!\n";
        }
        else
            discountPercent = percent;
    }

    double getSellingPrice(int nos)
    {
        return (unitPrice * (1 - discountPercent / 100)) * nos;
    }

    void display()
    {
        cout << name << " has a unit price BDT " << unitPrice << ". Current discount " << discountPercent << "%." << endl;
    }
};
int main()
{
    char napa[] = "Napa";
    char paracetamol[] = "Paracetamol";

    Medicine m;

    m.assignName(napa, paracetamol);
    m.display();

    m.assignPrice(0.8);
    m.display();

    m.setDiscountPercent(15.0);
    m.display();

    cout << m.getSellingPrice(10) << '\n';

    m.display();

    return 0;
}
