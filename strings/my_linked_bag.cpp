#include<iostream>
#include<assert.h>
#include "my_linked_bag.h"

using namespace std;

Linked_bag::~Linked_bag(){
            Node* toDel;
            while(head!=NULL){
                  toDel = head;
                  head= head->nxt;
                  delete(toDel);
            }
}

void Linked_bag::add(Dtype d){

            Node* toAdd = new Node(d);
            assert(toAdd != NULL);
            toAdd->nxt = head;
            head = toAdd;
  }

void Linked_bag::del(Dtype d){
             
           if(head == NULL)
              return;
           Node * toDel;    
           if(head->d == d){
              toDel = head;
              head = head->nxt;
              delete toDel;
              return;
             }
  
           Node* curr = head;
           Node* prev = NULL;
           
           while(curr != NULL){
                 if(curr->d == d){
                     toDel = curr;
                     if(prev!= NULL)
                        prev->nxt = curr->nxt;
                      curr = curr->nxt;
                      delete toDel;
                      return;
                     }
               prev = curr;
               curr = curr->nxt;   
           }
}

int Linked_bag::size(){
     
        int ret =0;
        if(head== NULL)
           return ret;
      
         Node* iter = head;
          while(iter != NULL){
                ret++;
                iter = iter->nxt;
            }
        return ret;

 }


int main(){

Linked_bag l;
l.add(10);
l.add(1);
l.add(2);

l.del(2);
l.del(10);
std::cout<<" size is" << l.size() <<std::endl;

return 0;
}                
