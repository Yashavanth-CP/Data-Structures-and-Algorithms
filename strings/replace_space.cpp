#include<iostream>
#include<algorithm>
using namespace std;

/* This program replaces each occurance of a space in a string with 
   '/20'.
*/

int main(){

   size_t spaces = 0;
   std::string str;
   std::cout <<" Enter the string:" << std::endl;
   std::getline(std::cin, str); 
     
   spaces = std::count(str.begin(), str.end(),' ');
  
   if(spaces ==0){
     std::cout<<" No spaces found in the input string "<< std::endl;
 //    return 0;
    }
   
   
   std::cout << " size of the string is :" << str.length() << std::endl;
   
   int orig_index = str.length()-1;
   str.resize(str.length() + (2* spaces));
   
   int ind = str.length()-1; 
   std::cout << " size of the string after modification is :" << str.length()-1 <<" "<< orig_index << std::endl;
   for(int i = orig_index; i >= 0 ;i--){

     if(str[i] == ' '){
          str[ind] = '0';
          str[ind-1] = '2';
          str[ind-2] = '/';
          ind = ind-3;
          }
       else{
            str[ind] = str[i];
            ind--;
           }
 }
   std::cout<<" Number of spaces is : " << spaces << std::endl;
    std::cout<<" Modified string is :" <<str <<std::endl;
    return 0;

}
