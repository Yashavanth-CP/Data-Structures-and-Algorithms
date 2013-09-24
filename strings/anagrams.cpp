#include<iostream>
#include<algorithm>

using namespace std;

/* This program checks whether two strings are anagrams of each other or not 
   1. Sort both the strings and compare them .
   2. count the number of occuraces of each characters in each string 
      and compare them.( Not implemented )
*/


int main() {

    std::string str1, str2; 
    std::cout<<" Enter the first string :" << std::endl;
    std::cin>> str1;
    if(str1.length() == 0){
       std::cout<<" Empty string " << std::endl;
       return 0;
     }
   
    
    std::cout<<" Enter the second string :" << std::endl;
    std::cin>> str2;
    if(str2.length() == 0){
     std::cout<<" Empty string :" << std::endl;
    }

    std::sort(str1.begin(), str1.end());
    std::sort(str2.begin(),str2.end() );
    
    if(str1.compare(str2)==0){
    std::cout<<" Both strings are anagrams of each other" << std::endl;
    }
    else
    std::cout<<" Not anagrams !!!!! "<< std::endl;
   
    return 0;

}
