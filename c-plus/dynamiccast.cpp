#include<iostream>
using namespace std;

class base{
            public: virtual ~base(){};
           };
 
class der1:public base{
                       public:
                        void     print(){
                                      std::cout<<" der1 :print() " << std::endl;
                                  };
                    };
class der2:public base{
                       public:
                        void     print(){
                                      std::cout<<" der2 :print() " << std::endl;
                                  };
};

int main(){
 /* Downcasting to the more derived classes is possible provided using the dynamic casting and 
    not guarenteed to be successful and if not returns 0 */

       base *bp = new der1();
       der2* dp2 = dynamic_cast<der2*>(bp);
       dp2->print();      
       return 0;
}
