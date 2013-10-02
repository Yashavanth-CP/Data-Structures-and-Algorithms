#include<iostream>
using namespace std;

class A{
               int i;
       public:
               A(int ii): i(ii){};
               ~A(){};
               virtual  void f() const{ 
                  std::cout<<" A::foo() " << std::endl;    
                  };
 };

 
class B{
               int i;
       public:
               B(int ii): i(ii){};
               ~B(){};
               virtual void f() const {
   		std::cout<<" B:: foo() " << std::endl;

	};
 };

class C: public B{

            A a;
            public: 
              C(int i, int ii): B(ii), a(i){};
              ~C(){};
           void f() const{
              a.f();
              B::f();
         };
  
};

int main(){

 B* b = new B(20);

 b->f();
 C *c = dynamic_cast<C*>(b);
if(c!= NULL)
 c->f();
 return 0;
}

