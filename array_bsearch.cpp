#include<iostream>
using namespace std;

/* This program finds the minimum among
   the sorted array using binary search */

enum Bool{ FALSE =0, TRUE};
#define SIZE 11
/* function declaration */
Bool binary_search(int begin, int end, int num);
int BEGIN;
int arr[SIZE]; // global array -- not a good practice.
int main(){
  
         cout << " Enter the array elements in ascending order" << endl;
         for (int i = 0; i < SIZE; i++){
         cin >> arr[i]; 
         }
         int resets =0;
         cout << " Reading Done " << endl;
 
        /* Validate the input , to be sorted array 
         * At any point only one reset point exists */
         
         for( int j=0; j< SIZE-1 ; j++){
             if(arr[j] > arr[j+1])
                resets++;
             }
         if(resets > 1){
            cout << " Not a valid input " << endl;
          }
         else{
         cout << " Valid input " << endl;
         binary_search(0, SIZE-1,arr[0]);
        }
          return 0;
}

Bool binary_search( int begin, int end, int num){

       if(end > SIZE-1 || begin < 0)
         return FALSE;
      
       /* TODO --handling odd numbered elements and even numbered elements */ 
       int mid = (begin+end)/2;
       
       if(arr[mid] < num)
          {
             num = arr[mid];
              
             end = mid -1;
          }  
       else if(arr[mid] >= num)
          {
            begin = mid+1;
             
          }
      // std::cout<<" Start: " << begin << "Mid :" << mid  << " End :" << end << "Num :" << num <<endl;
        if(end < begin){
          std::cout<<" Minimum element is: "<< num << std::endl;
          return FALSE;
         }
        else 
        binary_search(begin, end, num);
}
           
       
          








                  

