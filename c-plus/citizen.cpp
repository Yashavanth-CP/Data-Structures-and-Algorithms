#include<iostream>
#define DRINKABLE_AGE 18 
using namespace std;

class citizen{
            
             private:
                    string name;
                    int age;
             public:
                   friend ostream& operator<<(ostream& os, const citizen& czn);
                   citizen(): name("UNKNOWN"), age(0){};
                   citizen(const string& hesru, const int& vayassu) : name(hesru), age(vayassu){};
                   //accessors.
                   int get_age(){ return age;};
                   bool set_age(const int& vayassu){
                          if(vayassu >0){
                             age = vayassu;
                             return true;
                             }
                           return false;
                        }
                    
                  string get_name(){ return name;}
                  void set_name(string n){
                             if(!n.empty())
                                 name=n;
                     }

                   bool drinkable(){
                         return(age> DRINKABLE_AGE);
                      }

 };

ostream& operator<<(ostream& os, citizen& czn){

         os<< " Name: " << czn.name << " Age :" << czn.get_age() << " Drinking allowed " << czn.drinkable() <<endl; 
          return os;
 }


int main(){

           citizen ctzn;
           citizen ctzn2("Yash",27);
           cout<< ctzn;
           cout<< ctzn2;
            return 0;
      }

