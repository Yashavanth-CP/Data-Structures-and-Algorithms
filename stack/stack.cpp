#include<iostream>
#include<assert.h>
using namespace std;
#define SIZE 15
typedef int Type;
class stack{
    
      public: 
             stack(int s);
             ~stack();
             void push(Type t);
             Type pop();
             void display();
     private:
             Type *arr;
             int tos;
             int size;
};

stack::stack(int s){
     std::cout<<" Inside constructor:"<<endl;
     assert(s > 0);
     size = s;
     arr = new int[size];
     tos = -1;
     }
 
stack::~stack(){
    std::cout<<" Inside Destructor:"<<endl;
    delete this->arr;
}

void stack::push(Type t){
     std::cout<<" Top of stack , size  and data " << this->tos << " " << this->size << " " << t << std::endl;
     if(this->tos < (this->size - 1)){
        this->tos++;
        arr[this->tos] = t;
        }
     else
       std::cout<<" Stack is full"<< endl;
}

Type stack::pop(){
     if(this->tos < 0){
       std::cout<<" The stack is empty"<<endl;
       return 0;
     } 
     else{ 
      Type ret = arr[this->tos];
      this->tos--; 
      return ret;
     }
}

void stack::display(){
     int iter= 0;
     if(this->tos < 0){
       std::cout<<" stack is empty "<< std::endl;
       }

     while(iter <= tos){
        std::cout<< arr[iter]<<endl;
        iter++;
     }
}
                  
   
int main(){
     stack ex(10);
     
     ex.display();
     std::cout<<" Popped element is :" << ex.pop();
     std::cout<<" The stack elements are:"<<endl;
     ex.display();
     return 0;
}
     
            

