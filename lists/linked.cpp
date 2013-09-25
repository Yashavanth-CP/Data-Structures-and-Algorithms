#include<iostream>
#include "linked.h"
#include<assert.h>
using namespace std;

node::node (int d){
       
        data = d;
        next = NULL;

 }

node::~node(){


 }

 
linklist::linklist(){

      this->head = NULL;

 }

linklist::~linklist(){

     while(this->head != NULL){
          
          node *toDel = this->head;
          this->head = this->head->next;
          delete(toDel);

 }
}

void linklist::add(int d){
    
      node *toAdd = new node(d); 
      /* first node case */
      assert(toAdd != NULL);
      toAdd->next = this->head;
      this->head = toAdd;
  }

void linklist::del(int d){
      
   /* list is empty */
      if(this->head == NULL){
        std::cout<<" This list is empty " << std::endl;
        return;
        }

     /* first node */
     
     if(this->head->data == d){
        node *toDel = this->head;
        this->head = this->head->next;
        return;
        }
     
     node * prev = this->head; 
     node* it = this->head->next;
     
     while(it != NULL){
          if(it->data == d){
             prev->next = it->next;
             delete it;
            }
           else {
            prev->next = it;
            it = it->next;
         }
 
    }

 }

void linklist::display(){
     
       if(this->head ==NULL)
         std::cout<<" The list is empty "<< std::endl;
     
       node* it = this->head;
       while(it != NULL){
            if(it->next != NULL)
               std::cout<<it->data << "==>";
            else
               std::cout<< it->data << std::endl;
            it = it->next;
         }
}

int linklist::find_nth(int index){

     node *forward_it = this->head;
     node *normal_it = this->head;
     
   
     while(index >= 1 && forward_it != NULL){
            forward_it = forward_it->next;
            index--;
         }
    
    while(forward_it != NULL){
          forward_it = forward_it->next;
          normal_it =  normal_it->next;
      }
      
     assert(normal_it!= NULL);
     return normal_it->data;

}
     
void linklist::dup(){
     /* worst strategy -- do it recusrively */
     
      node  *first_it = this->head;
      node  *recur_it = first_it;
      node  *prev = NULL;
    
      while(first_it->next != NULL){
            recur_it = first_it->next;
            prev = first_it;
           
            if(recur_it->data == first_it->data){
               
               node *del = recur_it;
               prev->next = recur_it->next;
               recur_it = recur_it->next;
               delete del;
             }
            else{
              
                 prev = recur_it;
                 recur_it = recur_it->next;
             }
       }

} 
       

             
               
      
  
         






          


      
   




          
     
        
     
    
