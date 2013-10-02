#ifndef _MY_LINKED_BAG_H
#define _MY_LINKED_BAG_H

#include<iostream>
using namespace std;

typedef int Dtype;

class Node{
  public:
         Node(Dtype data):d(data),nxt(NULL){};
  
   Dtype d;
   Node* nxt;
  };

class Linked_bag{
        public:
        Linked_bag():head(NULL){};
        ~Linked_bag();

        void add(Dtype);
        void del(Dtype);
        int size();

    private: 
        Node* head;
   };

#endif

