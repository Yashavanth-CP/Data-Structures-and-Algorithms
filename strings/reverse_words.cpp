#include<iostream>
#include<sstream>
#include<vector>
using namespace std;

int main(){

    std::string str;
    std::cout<<" Please input the string: " << std::endl;
    std::cin >> str;

    std::vector<string> items;
    std::stringstream ss(str);
    std::string item;

    while(std::getline(ss,item,':')) {
        items.push_back(item);
    }
    
    for(std::vector<string>::iterator it = items.end()-1; it >= items.begin(); it--){
        std::cout<< "  "<<  *it ;
     }

}
   
   
   
