#include<iostream>
using namespace std;
enum Boolean{ FALSE=0, TRUE}; 

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
          
        int temp;
        Boolean swapped = TRUE;

        while(swapped == TRUE){
             swapped = FALSE;
        for(int i=0; i<size-1; i++){
              if(arr[i] < arr[i+1]){           
                 temp = arr[i];
                 arr[i] = arr[i+1];
                 arr[i+1] = temp;
                 swapped = TRUE;
               }
            }
        }
         std::cout<<" Enter the elements one by one:" <<std::endl;
         for(int i=0;i< size; i++){
             std::cout<<" Sorted: " << arr[i] <<std::endl;
          }
return 0;
}
          
