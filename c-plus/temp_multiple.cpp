#include<iostream>
using namespace std;

template<class T1, class T2>
void print_val( T1& x, const T2& y){
         x = x * y;
        std::cout<< " Values passed are " << x << "  " << y <<std::endl;
 }

template<class T>
void print_size(){
        std::cout<<" size is : "<< sizeof(T) << std::endl;
}

int main(){
     int x =15;
     double d= 150.0;
     print_val<int ,double>(x,d);
     print_size<double>();
     print_size<char>();
     print_size<std::string>();
     return 0;
}
