#ifndef _BINARY_H_
#define _BINARY_H_

#include<iostream>
using namespace std;


class Node{
           friend class Bree;           
           public:
                  int data;
                  Node* right;
                  Node* left;
                 
                  Node(int d): right(NULL),left(NULL),data(d){};
      };
class Bree{

           public: 
                 Bree():root(0){}; 
                void   add(int d);
                bool  del(int d);
                void  display();
                bool find(int d);
          private:
                 Node *root;
        };

#endif



