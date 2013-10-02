#include<iostream>
#include "binary.h"
using namespace std;


void Bree::display(Node* root){

             if(root == NULL)
                 return;
             std::cout<<" node value:"<< root->data <<std::endl;

             display(n->right);
             display(n->left); 
             return;
}

void Bree::add(int d){
           
           if(root == NULL){
           Node *n = new Node(d);
               root = n;
               return;
             }
            
           if(root->right->data > d){
                    
           
              
              

int main(){

	Bree *b = new Bree();
        return 0;


}

