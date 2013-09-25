#ifndef _LINKED_H
#define _LINKED_H
#include<iostream>
using namespace std;

class node{
          friend class linklist;
                 ~node();
          private:
                  node(int d);
                  int data;
                  node* next;
};

class linklist{
         
        public:
               linklist();
              ~linklist();
          void add(int data);
          void del(int data);
          int find_nth(int index);
          void display();
          void dup();
       private:
          node* head;
};

#endif


