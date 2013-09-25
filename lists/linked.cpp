#include<iostream>
#include "linked.h"
#include<assert.h>
#include<unordered_map>
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

void linklist::add_end(int n){
         
       node* toAdd = new node(n);
       if(this->head ==  NULL) {
          this->head = toAdd;
          return;
         }
     
       node *it = this->head;
       while(it->next != NULL)
             it = it->next;
        
       it->next = toAdd;
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
      node  *recur_it = NULL;
      node  *prev = NULL;
    
      while(first_it != NULL){
            recur_it = first_it->next;
            prev = first_it;
          
            while (recur_it != NULL){ 
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
   
        first_it = first_it->next;
       }
     
} 
       
void  linklist::dup_hash(){
          
      node *forward_it;
      node *prev;
   
      unordered_map<int, int> hashtable;
      forward_it = this->head;
      prev = 0;
 
      if(this->head == NULL){
         std::cout<<" The list is empty "<<std::endl;
         return;
     }
    
      while(forward_it != NULL){
           
        if(hashtable[forward_it->data] ==1){
           
           node* toDel = forward_it; 
           prev->next = forward_it->next;
           forward_it = forward_it->next;
         }
        
        else{
              hashtable[forward_it->data] =1;
              prev = forward_it;
              forward_it = forward_it->next;
            }

}

}     
           
void linklist::sum_lists(linklist *other , linklist* result){
               
                if(other == NULL) /*This case handles both, other is NULL and the this->head = NULL */   
                  return;
               if(other->head != NULL && this->head == NULL){
                    this->head = other->head;
                  }
               
               /* One possible approach is to count the number of elements both lists and start with the maximum lenght */  
               int carry =0;
               int sum =0;
               node* other_it = other->head;
               node* curr_it = this->head;
              
               /* Three cases to handle 1. When both the lists are equal 
                                        2. When the first list is shorter
                                        3. When the second list is shorter
               */ 
               while(curr_it->next != NULL){
                     if(other_it->next != NULL){
                           sum = curr_it->data + other_it->data + carry;
                           if(sum >9){
                              sum = sum-10;
                              carry =1;
                              }
                        result->add_end(sum); 
                        curr_it = curr_it->next;
                        other_it = other_it->next;
                         }
                      else
                         break;
                     }
            std::cout<<" Done here "<< std::endl;

          /* The first list is longer*/ 
                     if(other_it->next == NULL){
                        std::cout<<" the first list is longer "<< std::endl;    
                        while(curr_it !=  NULL){
                              sum = curr_it->data + carry;
                              if(sum > 9){
                                  sum = sum - 10;
                                  carry = 1;
                                }
                              else{
                                    carry =0; 
                                  }
                           result->add_end(sum);
                           curr_it = curr_it->next;
		      }
                       if(carry ==1){
                          result->add_end(carry);
                          carry =0;
                    }
                 } 
             
            std::cout<<" Done here 2" << std::endl; 
/* this case happens only when the other list is more longer than the present one  */
                if(other_it->next != NULL){
                  
                        std::cout<<" the second list is longer "<< std::endl;    
                        curr_it = other_it; 
                        while(other_it != NULL){
                              sum = other_it->data + carry;
                              if(sum > 9){
                                  sum = sum - 10;
                                  carry = 1;
                                }
                               {
                                 carry =0;
		         	}
                           result->add_end(sum);
                           other_it = other_it->next;            
                        }
                       if(carry ==1){
                          this->add_end(carry);
                          result->add_end(carry);
                         }
                        
               }
  
}

void linklist::rotate(int k){
 
       if(this->head == NULL){
          std::cout<<" List is empty" << endl;
          return;
        }
       
       node* first_it = this->head;
       node* last_it; 
       int list_len = 0;
       node *it = this->head;
   
       while(it != NULL){
             list_len++;
             it = it->next;
         }
      std::cout<<" lenght of the list is:" << list_len <<std::endl;       
      int actual = k % list_len;
   
       for(int i=0; i< (list_len-actual-1); i++){
           std::cout<<"rotating" << i<< "times" <<std::endl;
           if(first_it != NULL){
              first_it = first_it->next;
              }
           }
            
           last_it = first_it;
           node *temp = first_it->next;
 
          while(first_it->next != NULL)
                first_it = first_it->next;
            
            last_it->next = NULL;
            first_it->next = this->head;
            this->head = temp; 
}

     
 
            
 
      

void linklist::reverse(){
       
        node* sec;
        node* curr;
   
        if(this->head != NULL){

        curr = this->head;
        sec  = curr->next;
        curr->next = NULL;
          
        while(sec != NULL){
              curr = sec; 
              sec = sec->next;
             }
}  
 
}               
            
         
                
             
               
      
  
         






          


      
   




          
     
        
     
    
