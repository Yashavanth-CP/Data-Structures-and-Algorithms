#ifndef _FRACTION_H_
#define _FRACTION_H_

#include<iostream>
using namespace std;

class Fraction{
          public:
          Fraction(int whole):numer(whole),deno(1){};
          Fraction(const Fraction& other);
          Fraction operator*( const Fraction& other);
          Fraction operator+(const Fraction& other) const;
          bool operator==(const Fraction& other) const;
          
          friend ostream& operator<<(ostream& , const Fraction& to_print);
          
          private:
                 int numer;
                 int deno;
    };


#endif
