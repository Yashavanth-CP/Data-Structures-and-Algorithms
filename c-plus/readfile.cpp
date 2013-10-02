#include<iostream>
#include<fstream>
using namespace std;

int main(){

  ifstream ifs;
  ifs.open("citizen.cpp");
 
  if(ifs == NULL){
      std::cout<<" Could not open the file: "<< std::endl;
      return 0;

   }
   else{

       string line;
       while (getline(ifs,line)){
             std::cout<< line <<std::endl;
    }
 }

 return 0;

}
 
