#include<iostream>
using namespace std;

class base{

           public:
                  virtual  ~base(){
                          std::cout << " Base destructor called " << std::endl;
                          };
                   
};


class derived : public base{
              
           public: 

               ~derived(){
                          std::cout << " Derived destructor called " << std::endl;
                          };

     };
/* Forgetting to make a destructor virtual is an insidious bug because it often doesn’t directly affect the behavior of your program, but it can quietly introduce a memory leak. Also, the fact that some destruction is occurring can further mask the problem.

Even though the destructor, like the constructor, is an “exceptional” function, it is possible for the destructor to be virtual because the object already knows what type it is (whereas it doesn’t during construction). Once an object has been constructed, its VPTR is initialized, so virtual function calls can take place. */

int main(){

            base* bp = new derived();
            delete bp;
            return 0;

 }
