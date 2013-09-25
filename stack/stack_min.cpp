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
             Type pop_min();
             void display();
     private:
             Type *arr;
             Type *min;// extra array which holds the minimum element */ 
             int tos;
             int size;
};

stack::stack(int s){
     std::cout<<" Inside constructor:"<<endl;
     assert(s > 0);
     size = s;
     arr = new int[size];
     min = new int[size];
     tos = -1;
     }
 
stack::~stack(){
    std::cout<<" Inside Destructor:"<<endl;
    delete this->arr;
    delete this->min;
}

void stack::push(Type t){
     //std::cout<<" Top of stack , size  and data " << this->tos << " " << this->size << " " << t << std::endl;
     if(this->tos < (this->size - 1)){
        this->tos++;
        arr[this->tos] = t;
        if(this->tos ==0){
           min[this->tos] = t;
           std::cout<<" First element " << std::endl;
          }
        else{
         std::cout<<" Chaning the value in min array" << std::endl;  
          if(min[this->tos -1] < arr[this->tos]){
             min[this->tos] = min[this->tos -1];
            }
          else{
             min[this->tos] = arr[this->tos];
          }
        }
             
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

Type stack::pop_min(){
        if((this->tos != -1) && (this->tos < this->size))
        return min[this->tos];
   }

        
void stack::display(){
     int iter= this->tos;
     if(this->tos < 0){
       std::cout<<" stack is empty "<< std::endl;
       }

     while(iter > -1){
        std::cout<< "ele : " << arr[iter] <<"  min: " << min[iter] <<endl;
       
        iter--;
     }
}
                  
   
int main(){
     stack ex(10);
     for( int i =5; i <10 ; i++){
         ex.push(i);
        }
   
      ex.push(1);
      ex.push(2);
      ex.push(-1);    
     ex.display();
     std::cout<<" Popped element is :" << ex.pop();
     std::cout<<" The stack elements are:"<<endl;
     ex.display();
     return 0;
}
     
            

