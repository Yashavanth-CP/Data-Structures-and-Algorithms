#include<iostream>
using namespace std;


int main(){

        
         int size;
         std::cout<<" Enter the number of elements in an array: " << std::endl;
         std::cin>>size;
       
         int arr[size];
         std::cout<<" Enter the elements one by one:" <<std::endl;
         for(int i=0;i< size; i++){
             std::cin>> arr[i];
           }

          
