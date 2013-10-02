#include<iostream>
using namespace std;


int main(){

       int arrA[15] ={3,5,7,9,12,15,17,19,20,25};
       int arrB[5] = {1,2,4,40,43};
       
       int indexA =9;
       int indexB = 4;
       for (int i=14; i >=0;i--){
           
           if((indexA < 0) || (indexB < 0))
               break;
   
           if(arrA[indexA] > arrB[indexB])
              {
                  arrA[i] = arrA[indexA];
                  indexA--;
               }
            else{
                  arrA[i] = arrB[indexB];
                  indexB--;
                }

          }
     
       for (int i=0; i < 15;i++){
       
        std::cout<<"  " << arrA[i];     
}

}
