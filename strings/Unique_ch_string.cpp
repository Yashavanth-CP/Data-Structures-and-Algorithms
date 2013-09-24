#include<iostream>
#include<map>
using namespace std;

/* This program checks whether the given string contains
   unique characters or not. 
   1. Implementation using Map.
   2. Implementation using Arrays.
*/

int main(){
      
      /* Declare and initialise the array */
      int arr[256];
      for( int i=0; i<=255;i++){
          arr[i] = 0;
        }
      
      std::cout<<" Input a string: " << std::endl;
      std::string input;
      std::cin>> input;
      
      std::cout<<" The inputted string is " << input <<std::endl;
      for(int i=0; i<input.size() ; i++){
          {  
             if(arr[input[i]] == 1){
                std::cout<<" The string is  not with unique characters"<< std::endl;
                return 0;
                }
             arr[input[i]] = 1;
          }             
       }  

      std::cout<<" The string contains unique characters"<< std::endl;           
      return 0;

}

      
