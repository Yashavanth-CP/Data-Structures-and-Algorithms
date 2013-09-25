#include "queue.h"
#include<iostream>
using namespace std;


node::node(int d){
           
       data = d;
       next = NULL;
 }


queue::~queue(){

         if(this->head == NULL)
            return;

         while(this->head !=NULL){
          
               node* toDel = this->head;
               this->head = this->head->next;
               }
          this->tail = NULL;

}

void queue::enqueue(int d){
         
           node* toAdd = new node(d);
           
           if(this->head == NULL){

              this->tail = toAdd;
              this->head = this->tail;
              return; 
             }
            
            this->tail->next = toAdd;
            this->tail = this->tail->next;
     }

 int queue::dequeue(){
           
           if(this->head==NULL){
             std::cout<<" Queue is empty "<< std::endl;
             return -1;
          }
          
          node* toRet = this->head;
          this->head = this->head->next;
          int ret = toRet->data;
          delete(toRet);
          return ret;

}

 void queue::display(){

             if(this->head == NULL)
               {
                  std::cout<<" The queue is empty" <<std::endl;
                  return;
              }

              node* it = this->head;
              while(it!= NULL){
                std::cout<< it->data <<"==>"<<std::endl;
                it = it->next;
               }
              return;
           
          }
int main(){

        queue* q = new queue();
        q->display();
        std::cout<<" Dequeueing "<< q->dequeue() << std::endl;
        std::cout<<" Dequeueing "<< q->dequeue() << std::endl;
        std::cout<<" Dequeueing "<< q->dequeue() << std::endl;
        std::cout<<" Dequeueing "<< q->dequeue() << std::endl;
        q->display();

}
