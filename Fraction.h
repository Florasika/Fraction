
#ifndef FRACTION_H
#define FRACTION_H


class Fraction
{
    public:
        Fraction();
        Fraction(int nb1, int nb2);

        virtual ~Fraction();
        Fraction( Fraction const& other);
        Fraction& operator=(const Fraction& other);

        int getNumerateur();
        void setNumerateur(int val);
        int getDenominateur();
        void setDenominateur(int val);
        void afficher();
        friend std::ostream& operator<< (std::ostream& flux, Fraction &frac);
        Fraction operator+= (Fraction const &af);
        friend Fraction operator+(Fraction f1, Fraction f2);
        Fraction operator+(int n);


    protected:

    private:
        int numerateur;
        int denominateur;
};

#endif // FRACTION_H
