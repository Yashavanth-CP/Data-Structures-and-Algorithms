#include<iostream>
using namespace std;

int fib( int num);


int main(){

   for( int i =0; i< 10;  i++){

       std::cout<< "Fib of " << i<< "  is   " << fib(i) <<std::endl;
       }

    return 0;

 }

 int fib(int n){

        if( n==1 || n==0)
            return n;
        
        int ret =0;
        ret = fib(n-1)+fib(n-2);
        return ret;
 }
