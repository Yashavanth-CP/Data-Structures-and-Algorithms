#include<iostream>
using namespace std;

class staticex{
           
            public: 
                     int y;
               int getx();
           private:  
               static int x = 5;
             };

int staticex::getx(){

              return this->x;
}


int main(){

         staticex one, two;
         std::cout<<" static variable values are" << one.getx() << " "<< two.getx() <<std::endl;
	 std::cout<<" Static variable is : "<< staticex::x;
         return 0;

    }
    
