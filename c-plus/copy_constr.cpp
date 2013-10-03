#include<iostream>
using namespace std;

/* This example demonstrate:
   1. How to avoid the copying of the derived class objects in the whole hierarchy 
      i. Make assignment operator as private  in base class.
      ii. Make copy construtor as private in base class.

   Why only in base class ?? Reason is every copying of objects, starts with base class objects copying
   and if the base class copying is made not valid, then the copying of objects is not allowed in the whole hiearchy tree.

*/
 

class base{
          public:
          base(){};

          private:
                 base& operator=(const base& b2){std::cout<<" Called here" << std::endl;};
                 base(const base& b){};
    };

class derived1: public base{
           private: int d1; 
                };
 

class derived2: public base{
           private:  int d2;
  };

int main(){

    derived1 d1;
    derived1 c; 
    c = d1;
    return 0;

}
    
