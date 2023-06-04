#include <iostream>
#include "Fraction.h"

using namespace std;

Fraction::Fraction()
{
    //ctor
    numerateur = 0;
    denominateur = 0;
}

Fraction::Fraction(int nb1, int nb2)
{
    numerateur = nb1;
    denominateur = nb2;
}


Fraction::~Fraction()
{
    //dtor
}

Fraction::Fraction(const Fraction& other)
{
    //copy ctor
    numerateur = other.numerateur;
    denominateur = other.denominateur;
}

int Fraction::getNumerateur()
{
    return numerateur;
}

void Fraction::setNumerateur(int val)
{
    numerateur = val;
}

int Fraction::getDenominateur()
{
    return denominateur;
}

void Fraction::setDenominateur(int val)
{
    denominateur = val;
}

void Fraction::afficher()
{
    cout<< getNumerateur()  << "/" << getDenominateur() <<endl;
}


/*Fraction::addition(const Fraction& other)
{
    int new_numerateur = numerateur * autre.denominateur + autre.numerateur * denominateur;
    int new_denominateur = denominateur * autre.denominateur;
    return Fraction(new_numerateur, new_denominateur);
}*/



Fraction& Fraction::operator=(const Fraction& rhs)
{
    if (this != &rhs) {
        numerateur = rhs.numerateur;
        denominateur = rhs.denominateur;
    }
    // handle self assignment
    //assignment operator
    return *this;
}

ostream& operator<< (ostream& flux, Fraction &frac)
{
    flux<< frac.numerateur << "/" << frac.denominateur ;
    return flux;
}

Fraction Fraction::operator+= (Fraction const &af)
{
    numerateur = numerateur*af.denominateur + denominateur*af.numerateur;
    denominateur = denominateur*af.denominateur;
    return *this;
}

Fraction operator+(Fraction f1, Fraction f2)
{
    Fraction result(f1);
    result+=f2;
    return result;
}

Fraction Fraction::operator+(int n)
{
    numerateur = numerateur + denominateur*n;
    return *this;
}



