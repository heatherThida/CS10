#ifndef RATIONAL_H
#define RATIONAL_H
#include <iostream>

class rational
{
public:
    rational(int i_num= 0, int i_deno = 1);
    int get_num();
    int get_deno();


private:
    int num, deno;

};

// overload the insertion operator (cout operator)
// overwrite the ostream operator so that it prints the way we want it 0/1
// this is NON-MEMBER function
std::ostream & operator << (std::ostream & , rational );

// overload the extraction (cin operator)
std::istream & operator >> (std::istream & , rational &);

// overloading addition operator
rational operator + (rational, rational);

// overload the multiplication operator
rational operator * (rational, rational);

rational operator - (rational a, rational b);

rational operator / (rational a, rational b);

#endif // RATIONAL_H
