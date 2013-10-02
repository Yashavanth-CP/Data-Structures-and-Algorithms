#include<iostream>
using namespace std;

class base{
           public:
           virtual void print(){
            			std::cout << " Base: print() " << std::endl;
                                }

   };

/* The derived class implements one more virtual function -- however the base class is not aware of it */
class Derived : public base{

               public:
			void print(){

 				std::cout << " Derived:print() "  << std::endl;
 			}

                       virtual void print1() {
 				std::cout << " Derived:print1() " << std::endl;
 			}

};

/* Downcasting to the base class pointer  from the derived class works... However, using base class pointer, the added virtual function print1 
   cannot be called , since the base pointer is not having information of the newly added virtual function */

int main(){

             base *b = new Derived();
             b->print1();
             return 0;

 }
 
