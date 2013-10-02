#include<iostream>
using namespace std;

class Base{
            public: 
                   Base(){
                           //std::cout <<" Base::Base() called "<< std::endl;
                          }
                   void  print(){
                           std::cout << " Base:print() called" << std::endl;
                          }
                   void virtual print1() {
                           std::cout<<" Base:: print1() called" << std::endl;
                         }

    };
 
class Derived : public Base{
                           public: 
                            Derived(){

                             //       std::cout << " Derived: Dervied() called" << std::endl;
                                 } 
                        # if 0
                           void print(){
                                
                                    std::cout << " Derived: print() called" << std::endl;
                                }
                        #endif
                         private:
                           void print1(){
                             
                             std::cout<< " Derived: Print1() called" << std::endl;
                             }   
 }; 

 int main(){
            /* When the base class is a abstract class, then if the derived class does not implement the pure virtual functions of the 
               base class, then the derived class also becomes abstract */
            // Base* bp = new Base();
            // Derived* dp = new Derived();
            /* no magic -- Derived class print is called- works */ 
            // dp->print();
            // bp = dp;
             /* Only the base class functions are called when no virtual mechanism is used */
             /* With virtual mechanism -- Dervied class functions are called-- since the compiler maintains the virtual table */
                      
            // bp->print();
             /* Always the class pointers in the higher levels of the hiearchy can be assigned with the pointers of the derived class(Lower levels) */
             /* Assigning the derived class pointers to the base classes pointers is not valid, since the derived class pointers have extra fields for the other
                memebers( compile time error) */
             //dp = bp;  
             /* Invalid -- since the dervice pointer is having some extra fields which becomes invalid and the 
                          compiler gives an error */
             std::cout<<" With Objects  ----- > " <<std::endl;
             Base bp;
             Derived dp;
             bp = dp;
             bp.print();
             bp.print1();
 
             std::cout<< " With Object pointers --->" << std::endl;
             /* Part 2 */
             Base* bpo = new Derived();
             bpo->print();/* Prints the derived class print since, the object slicing is done. That is, base class part of the dervied class is assiged to the 
                          base class object */
             //dpo = bpo; /* Invalid -- cannot assign the base class object to the derived class object, since the extra members of the derived class object become                           invalid and the compiler gives error */ 
             bpo->print1(); 
             return 0;
}
