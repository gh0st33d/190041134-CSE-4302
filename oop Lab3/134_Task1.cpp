#include <bits/stdc++.h>
using namespace std;
class RationalNumber
{
    int numerator, denominator;

public:
    void assign(int numerator_inp, int denominator_inp)
    {
        if (denominator_inp == 0){
            cout << "INVALID" << endl;
            return;
        }
        numerator = numerator_inp;
        denominator = denominator_inp;
    }
    double convert()
    {
        return (double)numerator / denominator;
    }
    void invert()
    {
        if (numerator == 0)
        {
            cout << "INVALID" << endl;
            return;
        }
        swap(denominator, numerator);
    }
    void print()
    {
        cout << "The Rational Number is " << numerator << "/" << denominator << endl;
    }
};

int main()
{
    RationalNumber a;

    a.assign(0,2);
    a.print();

    cout<<a.convert()<<'\n';

    a.invert();
    a.print();
}
