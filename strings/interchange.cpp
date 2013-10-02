#include<iostream>
#include<assert.h>
using namespace std;

int main(){

       char st[] = { 'Y','a','s','h','a','v','a','n','t','h','\0'};
       char *str = st;
       char* end = str;
   
       while(*end != '\0'){
             end++;
            }

             end--;
     char temp;     
      while(end >= str){
         temp = *end;
         *end = *str;
         *str = temp; 
         std::cout<< "Values are :" << *str << " and   " << *end <<std::endl;
         end--;
         str = str+1;

          }

     return 0;

 }
        
             
