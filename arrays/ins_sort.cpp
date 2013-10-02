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
  
        int index = 0;
          
        int temp, min,min_pos;
  
        for(int i=0; i<size; i++){
              
              min = arr[i];
             
          for(int j=i; j<size ;j++){
               
               if(arr[j] <= min){
                  min = arr[j];
                  min_pos =j;
                    }
           
               }
            std::cout<<" Min : "<< min ;
            
             temp = arr[i];
             arr[i] = arr[min_pos];
             arr[min_pos] = temp;
         }
         std::cout<<" Enter the elements one by one:" <<std::endl;
         for(int i=0;i< size; i++){
             std::cout<<" Sorted: " << arr[i] <<std::endl;
          }
return 0;
}
          
