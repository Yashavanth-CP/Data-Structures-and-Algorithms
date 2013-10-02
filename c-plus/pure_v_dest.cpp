#include<iostream>
using namespace std;

/* When a destructor is made as pure virtual, it can be given definition -- no offense allowed.
   However, if the derived class does not implement the destructor - then the derived class becomes abstract.
   but, still the derived class objects can be created since, the compiler creates automatically one destructor for each class */


class base{

          public: 
               virtual  ~base() = 0;
          };
base::~base(){};



class derived :public base {
              /* Perfectly fine-- not implementing the destructor -- compiler generates one */ 
  };

/* As a guideline, any time you have a virtual function in a class, you should immediately add a virtual destructor (even if it does nothing). This way, you ensure against any surprises later. */

/*  Suppose the virtual mechanism were used inside the destructor. Then it would be possible for the virtual call to resolve to a function that was “farther out” (more derived) on the inheritance hierarchy than the current destructor. But destructors are called from the “outside in” (from the most-derived destructor down to the base destructor), so the actual function called would rely on portions of an object that have already been destroyed! Instead, the compiler resolves the calls at compile-time and calls only the “local” version of the function. Notice that the same is true for the constructor (as described earlier), but in the constructor’s case the type information wasn’t available, whereas in the destructor the information (that is, the VPTR) is there, but is isn’t reliable. */
int main(){

         derived d;
         return 0;

}
