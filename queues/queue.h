#include<iostream>
using namespace std;

class node{
         
          friend class queue;
          node(int d);       
          private:
            
                int data;
                node *next;
   };
 

class queue{
         public:
           queue(){ head = NULL; tail = NULL;};
          ~queue();
          void enqueue(int d);
          int dequeue();
          int size();
          void display();
         private:
           node* head;
           node * tail;
};


