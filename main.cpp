#include <iostream>
#include "Fraction.h"

using namespace std;

int main()
{
    Fraction f1(7,9);
    Fraction f2(4,25);
    Fraction f3(f2);
    Fraction f5;
    Fraction f6;
    cout << "Calcul sur les fractions" << endl;

    //Fraction r1 = f1.addition(f2);
    //Fraction r2 = f2.addition(f1);

    cout<< "Fraction1 "<<f1.getNumerateur()
            << "/" << f1.getDenominateur() <<endl;

    cout<< "Fraction2 " <<f2.getNumerateur()
            << "/" <<f2.getDenominateur() <<endl;

    cout<< "Fraction3 " << f3 <<endl;

    f3+=f1;
    cout<< f3 <<endl;

    f5 = f1+f2;
    cout<< f5 <<endl;

    f6 = f1 + 8;
    cout<< f6 <<endl;
    return 0;
}
