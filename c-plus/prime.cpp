#include<iostream>
#include<math.h>
#define MAX 100
using namespace std;


bool is_prime(int x);
 


int main(){

           int num = 2;

            while(num < MAX ){

                  if(is_prime(num)){

                     std::cout<<"  " << num ;
                     }

                 num++;
 }
 

 }

bool is_prime(int x){
 
                    for(int i=2; i < x/2; i++) {
                              if ((x%i) == 0) {
                                 return false;
                              }
 }
            
                   std::cout<<" Returning true for : "<< x << std::endl;
                    return true;
}

        
