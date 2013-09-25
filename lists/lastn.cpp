#include "linked.h"
#include<iostream>
#include<assert.h>
using namespace std;

/* this program prints the nth last element from the list */

int main(){

     linklist *lst = new linklist();
     linklist *lst1 = new linklist();
     linklist *res  =  new linklist();
     assert(lst != NULL);
    
    for(int i=0; i< 10; i++){
       
       lst->add(i);
     
      }
   
    for(int i=9; i >0 ; i--){
       
       lst1->add(i);
     
      }
    lst->display();
    lst1->display();
    //lst->dup();      
      
    int n;   
    std::cout<<" Give the nth element to find "<<  std::endl;
    std::cin >> n;
   
    int num =0;
    num = lst->find_nth( n);
    std::cout<<" Nth element of the list from the end is : " << num <<std::endl;
    
        
    lst->dup_hash(); 
    lst->rotate(8);
    lst->display();
//    res->display();
    
    return 0;

 }
    
    
    
