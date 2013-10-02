#include<iostream>
using namespace std;

class base{
		public:
			virtual void print() =0;
	};

class derived: public base{
 		public:
 			void print(){

 
			std::cout << "  derived::print() " << std::endl;
}
 };


int main(){
/* Trying to do object slincing with the Abstract class results in an error.
   1. First of all compiler cannot execute the base b statement. Since, decalring the variable 
      of the abstract class type is not allowed */

       derived d;
       base b = d;
       b.print();
       return 0;
 }


