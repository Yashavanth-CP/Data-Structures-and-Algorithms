#include<iostream>
using namespace std;
template <class T>
T get_sum(T *arr, int size){

        T  sum = T();
        for (int i=0 ; i<size;i++){
          
           sum += arr[i];
           }

        return sum;
 }

template<class T>
T get_double( T& data){
        
        T ret = T();
         ret = data*2;
      return ret;
}

 int main(){

        int int_arr[]= {1,2,3,4,5,6,7,8,9,10};
        float f_arr[] = {1.0,2.0,3.0,4.0,5.5 ,6.0,6.5 ,7.0,7.5};
        int x =15;
        double d = 1.5;   
        std::cout<<" Sum of the integer array is "<< get_sum(int_arr,10) <<std::endl;
        std::cout<<" Sum of Float array is "<< get_sum(f_arr,9) <<std::endl;
        std::cout<<" Doubling the value" << get_double(x) <<std::endl;
        std::cout<<" Doubling the value" << get_double(d) <<std::endl; 
         return 0;

       } 
