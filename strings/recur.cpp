#include<iostream>
using namespace std;

void get_digits(int);
void print_brackets( int);

int main(){
 
  int num;
  std::cout<<" Please  enter the number " << endl;
  cin >> num;
   
  get_digits(num);
  print_brackets(num);
  return 0;
   }

void get_digits(int num){

      if( num < 10 ){
         std::cout<< num <<std::endl;
         return;
      }
          
      std::cout<< num%10 << "  " << std::endl;
      get_digits(num/10);
      
    }

void print_brackets(int cnt){

      std::cout<<"(";
      
      if(cnt == 0){
      std::cout<<")";
      return;
      }
      cnt--;
      print_brackets(cnt);
      std::cout<<")";
      return;
}
        
      
         
