#include<iostream>
#include "Fraction.h"
 
using namespace std;

Fraction::Fraction(const Fraction& other){

                  this->numer = other.numer;
                  this->deno  = other.deno;
                }

bool Fraction::operator==(const Fraction& other) const {
           
              return ((numer == other.numer) &&(deno == other.deno));
         }

Fraction Fraction::operator+(const Fraction& other) const{
             
               return *this;
    }

Fraction Fraction::operator*(const Fraction& other) {

                this->numer *= other.numer;
                this->deno  *= other.deno;
 	        return *this;

  }

ostream& operator<<(ostream& os, const Fraction& obj){
          
              os<< obj.numer <<"  " << obj.deno << endl;
              return os; 

 }
int main(){

    Fraction fc;
    Fraction f(10);
    Fraction cp(f);
    
    cout<< fc << std::endl;
    cout<< cp << std::endl;
    cout<< f << std::endl;
    return 0;


}

