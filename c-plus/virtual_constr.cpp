#include<iostream>
using namespace std;

class A{
 
       public: 
             A(){ f();};
             virtual void f(){n =10;};
       protected:
             int n;
};

class B : public A{

       public:
             B(): A(){};
             void f() { n=20;};
             int get(){f(); return n;};
};

int main(){

       B b;
       std::cout<< b.get() << std::endl;
       return 0;
}
