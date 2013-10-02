#include<iostream>
using namespace std;

bool find_string( char* to_find, char *orig);

int main(){

     char *find = " ";
     char *orig = "Yashvanth";
       
     bool ans = find_string(find, orig);
    
     if(!ans)
        std::cout<<" String was not  found: "<< std::endl;
     else
        std::cout<<" String was found  " <<std::endl;

  }


bool find_string(char* to_find, char* orig){

         char *start;

        for(start = orig; *start !='\0'; start++){

            char *p = start;
            char *q = to_find;

          while(*p != '\0' && *q != '\0' && *p==*q){

                p++;
                q++;
              }
            
           if(*q == '\0')
              return true;
        }

        return false;
}
