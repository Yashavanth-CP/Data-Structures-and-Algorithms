#include<iostream>
using namespace std;

/* class without virtual function - Does not hold the pointer to the virtual function*/
class zero{

	  public:
                  int w; 
		  void print(){

			   std::cout << "Zero::print() " << std::endl;
		  }
};

/* Each time you create a class that contains virtual functions, or you derive from a class that contains virtual functions, the compiler creates a unique VTABLE for that class, */

/* All the class in the inhertiance hiearchy with virtual functions hold the pointer to the Virtual table */
class one{

          public: 
                 int w;
                 virtual void print(){

                           std::cout << "One::print() " << std::endl;
                  }
 };

class two: public one{

           };

class three: public two{
          public:
          void print(){

                       std::cout<<" Three:print() " << std::endl;

                     }
 };

/* Since class two is not overriding the virtual function os the class one(base class) , in this case the dynamic binding is 
   automatically adjusted to the apprpiate  next higher level( in this case class one) which implements the same.
   
   Class Three overrides the virtual function, so with base pointer assigned to the type class three, the Three:print() is called " */

/* Class three object pointer or reference can be downcasted to class two or class one -- valid( since both two and one are higher in the hierachy */


int main(){
          zero z;
          one o1;
          two t2;
          three t3;
          std::cout<<" class zero size () " << sizeof(z) <<std::endl;
          std::cout<<" class one size()   " << sizeof(o1)<<std::endl;
          std::cout<<" class two size()   " << sizeof(t2)<<std::endl;
          std::cout<<" class three size()   " << sizeof(t3)<<std::endl;
          return 0;

 }
