#include<iostream>
#include<string>
using namespace std;

class name{
             public:
                    name():hesru("yash"){}; /* Member initialization works only one the class members -- ie only in base class */
                    string get_name();
                    void set_name (string n);
             private:
                    string hesru;
                    void draw(){ std::cout <<" Draw is called" << std::endl;};
           };

  
class derived: public name {
                public: 
                derived(){  draw(); }; /*  1. Member initialization here gives an error since, the base constructor is called before calling the 
                                    derived class constructor -- as a result, the hesru("yash"); cannot be reinitialised here. It should be always 
                                    done in the class in which it is defined */
                              /* 2. The private members of the base class( ie hesru in this example ) cannot be accessed directly here, since it is private to the 
                                    base class, it can access through getters and setters.        */
                              /* 3. The same holds true for the private methods, draw() cannot be accessed directly*/ 
                                
/*                               class Base

    public: can be accessed by anybody
    private: can only be accessed by only base member functions (not derived classes)
    protected: can be accessed by both base member functions and derived classes */

};


int main(){

       
         derived d;
         return 0;

 }
