#include<iostream>
using namespace std;
 

int main(){
   
         int arr[10] = {1,2,3,4,5,6,7,8,9,10};
         for(int i=0; i<10; i++)
            {
               std::cout<< arr[i] <<std::endl;

              }
       
        int sum =0;
        std::cout<<" Print the sum :" ;
        std::cin >>sum;
        int head =0;
        int tail =9;
         while(head != tail){
        if(arr[head]+arr[tail] ==sum){
            std::cout<<" Number pair : "<< arr[head] << "," << arr[tail] << std::endl; 
            head++;
            }
        
         else if(arr[head]+arr[tail] < sum){
            head++;
            }
         
         else {
             tail--;
          } 
        }
        return 0;
     }

