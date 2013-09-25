#include "linked.h"
#include<iostream>
#include<assert.h>
using namespace std;

/* this program prints the nth last element from the list */

int main(){

     linklist *lst = new linklist();
     assert(lst != NULL);
    
    for(int i=0; i< 20; i++){
       
       lst->add(i);
     
      }
   
    lst->display();
    lst->dup();      
      
    
//    std::cout<<" Give the nth element to find "<<  std::endl;
  //  std::cin >> n;
   
 //   int num =0;
  //  num = lst->find_nth( n);
   // std::cout<<" Nth element of the list from the end is : " << num <<std::endl;
    


    
    return 0;

 }
    
    
    
