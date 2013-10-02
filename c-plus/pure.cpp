#include<iostream>
using namespace std;

class base {

             virtual void print()=0;
  };

class derived : public base{
           
          public:
            void print(){

                 std::cout<< " Printed" << std::endl;

           }
};

int main(){

         derived* d = new derived();
  //       d->print();
         return 0;

}

