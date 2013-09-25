#include<iostream>
#include<set>
using namespace std;

//void  permute( string str);

void get_chars( std::set<string> *chars ,string str);

int main()
{
    std::string str;
    cout << " Give the string to be permutated" << endl;
    cin >> str;
    std::set<string> *chars = new std::set<string>;
    get_chars(chars,str);
    std::set<string>::iterator it;
    for(it = chars->begin(); it !=  chars->end() ; it++)
       {
          std::cout << "characters are " << *it  << endl;
       } 
    return 0;
}

// void  permute(string str){
  
 void get_chars(std::set<string>* chars, string str){
        string str1; 
    while(str.size()!=1){
          str1 = str.substr(str.size()-1, str.size()-1);
          cout << " Indivisual chars are : " << str1 << endl; 
          str.erase(str.size()-1,1);
          chars->insert(str1);
        //  cout << " After erasing:  " << str <<endl; 
          continue; 
        }
    std::cout << " at the end : "<<  str <<endl;
    chars->insert(str);
    }
