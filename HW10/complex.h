#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

class complex
{
public:
    complex(double = 0.0, double = 0.0);
    double real();
    double img();
    double magnitude();

private:
    double r, i;
};

// overload the insertion operation (cout operator)
std::ostream & operator << (std::ostream & , complex );

// overload the extraction (cin operator)
std::istream & operator >> (std::istream & , complex &);

// overloading addition operator
complex operator + (complex, complex);

// overload the substract operator
complex operator - (complex a, complex b);

// overload the multiplication operator
complex operator * (complex, complex);

// overload the division operator
complex operator / (complex a, complex b);

#endif // COMPLEX_H
