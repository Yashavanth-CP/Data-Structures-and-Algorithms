#include<iostream>
#include<set>
using namespace std;

int main(){

    int row =0, col =0;
    std::cout <<" Enter the number of rows: " ;
    std::cin >> row;
    std::cout<< "Enter the number of columns: ";
    std::cin >> col;
   
    if(row < 1 || col <1){
      std::cout<<" Invalid number of rows and colums " <<std::endl;
      return 0;
     }

    int matrix[3][3] = {{0,2,0},{4,5,6},{0,8,0}};
    std::set<int> rows;
    std::set<int> cols;

    for( int i=0; i<3;i++){
   
      for(int j=0;j<3; j++){
           if(matrix[i][j] ==0)
              {
                rows.insert(i);
                cols.insert(j);
              }
    }

    }
 
   for(std::set<int>::iterator it = rows.begin(); it != rows.end(); it++)
      {
        std::cout<< *it << std::endl;
        for(int x=0; x <3 ;x++){
               matrix[*it][x] =0;
           }
  }
  
   for(std::set<int>::iterator jt = cols.begin(); jt != cols.end(); jt++)
       {
         std::cout<< *jt << std::endl;
        
       for(int x=0; x <3; x++){
               matrix[x][*jt] =0;
           }
       }
  std::cout<< matrix[0][0] <<" "<< matrix[0][1] <<" " << matrix[0][2] <<std::endl;
  std::cout<< matrix[1][0] <<" "<< matrix[1][1] <<" " << matrix[1][2] <<std::endl;
  std::cout<< matrix[2][0] <<" "<< matrix[2][1] <<" " << matrix[2][2] <<std::endl;
 return 0;
}

    
   
    
     
      
