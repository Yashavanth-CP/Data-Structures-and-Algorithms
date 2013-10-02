#include<iostream>
#include "stack_list.h"

using namespace std;

Node::Node(int d){
    data = d;
    nxt = NULL;
    }


Stack::~Stack(){

           if(head == NULL)
              return;
          
           Node* toDel;
           while(head!= NULL){
                 toDel = head;
                 head = head->nxt;
                 delete(head);
             }
 }
                 
void Stack::push(int d){
   
            Node* toPush = new Node(d);
            toPush->nxt = head;
            head = toPush;
            return;
 }
     
int Stack::pop(){
      
            if(head != NULL){
            int ret = head->data;
            Node *toDel = head;
            head = head->nxt;
            delete(toDel);
            return ret;}

            else return -1;
}

int Stack::top(){

             if(head == NULL)
                return -1;

             return head->data;

}

void Stack::show(){
              if(head == NULL)
                std::cout<<" List is empty" <<std::endl;  
              Node* iter=head;          
              while(iter != NULL)
                   {
                      std::cout<< iter->data  << " ==>";
                      iter = iter->nxt;
                   }

 }


int main(){

         Stack s;
         int i = 0;
         while(i < 7){
                s.push(i);
                 i++;
          }
         s.show();
         i = 10;
         while(i > 0){
               std::cout<<" Popped  :" << s.pop() <<std::endl;
                 i--;
          }
         s.show();       
      return 0;
       

 }
 
         
