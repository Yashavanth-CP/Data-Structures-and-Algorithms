#include<iostream>
using namespace std;


template<class Type1, class Type2, class Type3> 
class triple{

           private: 

                   Type1 x;
                   Type2 y;
                   Type3 z;
           public:
                   
                  triple():x(Type1()),y(Type2()), z(Type3()){};
                  triple(const triple<Type1,Type2,Type3>& obj ): x(obj.x),y(obj.y),z(obj.z){};
                  triple(const Type1& xx,const  Type2& yy,const  Type3& zz): x(xx),y(yy),z(zz){};
                 
                  bool operator==(const triple<Type1,Type2,Type3>& com) const {
                         return( (com.x==x) && (com.y ==y) &&(com.z == z));
                        };
                  
                  bool operator!=(const triple<Type1,Type2,Type3>& com) const {
                         return( (com.x!=x) || (com.y !=y) || (com.z != z));
                        };

                  bool operator=(const triple<Type1,Type2,Type3>& com) {

                            };

                  bool operator>(const triple<Type1,Type2,Type3>& com) const  {
                         
                       return( (x > com.x) && (y > com.y) && (z > com.z));
                      };
               
                  void swap(triple<Type1,Type2,Type3> swapped){
                      
                       triple<Type1,Type2,Type3> temp = *this;
                       *this = swapped;
                       swapped = temp;
                      };

};


int main(){

        return 0;
}

                            
                         
