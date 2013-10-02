#include<iostream>
#include "stringset.h"
using namespace std;


stringset::stringset(): count(0), Arr(new string[MAX]){};
stringset::stringset(const stringset& other): count(other.count), Arr(new string[MAX]){

 for (int i=0; i< count ;i++)
      Arr[i] = other.Arr[i];
}

bool stringset::contains(const string& str) const{

       for(int i=0; i<count; i++){
            if(Arr[i] == str)
               return true;
        return false;
 }
}

bool stringset::add(const string& str){
              
               if(count>MAX)
                  return false;         
               
              if(!contains(str)){
                 Arr[count] = str;
              
                return false;
 }
}
bool stringset::del(const string& str){

                if(count ==0)
                   return false;
          
                for(int i =0; i<MAX ;i++){

                    if(Arr[i] == str) {

                          for( int j = i; j <count ;j++){

                                 Arr[j] = Arr[j+1];
                               }

                         }      
                 } 

}

bool stringset::operator==(const stringset& other) const{

             if(count != other.count)
                return false;
              for(int i=0; i<count; i++){
                  
                 if(!other.contains(Arr[i]))
                    return false;
                 }
               return true;

} 
                 




int main(){

return 0;


 }
