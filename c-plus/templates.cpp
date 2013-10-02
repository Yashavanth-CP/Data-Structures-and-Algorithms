#include<iostream>
using namespace std;



template<class T>
T add( T x, T y){

        return x+y;
}
template<class T>
void accept_arg (T x, T y){

   std::cout<< " Enter the two numbers of type : " <<  std::endl;
   std::cin >> x;
   std::cin >> y;
   std::cout<<" The sum of two numbers is  :" << add(x,y) <<std::endl;
}


 int main(){
       
       int x =0;
       int y=0;
       accept_arg(x, y);
       return 0;
}

