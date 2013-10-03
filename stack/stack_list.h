#ifndef _STACK_LIST_H_
#define _STACK_LIST_H

#include<iostream>

class Node{
           public:
           Node(int d);
           int data;
           Node* nxt;
   };

class Stack{
        
           public:
                  Stack(): head(NULL){};
                  ~Stack();
                  void push(int d);
                  int pop();
                  int top();
	          void show();
           private:
                 
                  Node* head;
 };
#endif 
