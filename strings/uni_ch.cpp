#include<iostream>
using namespace std;
/* Giving seg fault */
int main(){

   char str[5] = {'y','a','s','h','\0'};
   char *rev = str; 
   int count =0;
   while(*str != '\0')
        {
          count++;
          str++;
        }
   str--;
   char temp;
   std::cout <<" Succsessfully counted " << std::endl; 
   while(str > rev){
        std::cout <<" swapping : " <<  *str << *rev << std::endl;
        temp = *str;
        *str = *rev;
        *rev = temp;
        std::cout<<" Decrementing the pointers "<< std::endl;
        rev++; str--;
        std::cout<<" Temp Char is "<< temp <<std::endl;
   }
   
   std::cout<<" Number of letters in a string are:" << count << std::endl;
   while(*str !='\0'){
        std::cout<<" " << *str  <<std::endl;
        rev++;
     }
   return 0;

}
