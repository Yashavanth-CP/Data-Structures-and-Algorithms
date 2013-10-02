#include<iostream>
using namespace std;

template<class Type1, class Type2>
class pair{
    
        Type1 x;
        Type2 y;
       
      public:
            pair():x(Type1()),y(Type2()){};
            pair(const Type1& xx, const Type2& yy):x(xx),y(yy){};
            pair(const pair<Type1, Type2>& p): x(p.x),y(p.y){};
            bool operator== (const pair<Type1,Type2> com) const{
                      return ((x==com.x)&&(y==com.y));
            };
        
            bool operator!= (const pair<Type1, Type2> com) const{
                        return ((x!=com.x)||(y!= com.y));
            };

            bool operator>(const pair<Type1,Type2> com) const{
                        return ((x >com.x)&& (y>com.y));
            };

            bool operator<(const pair<Type1,Type2> com) const{
                        return ((x <com.x ) || (y<com.y)); 
           };
           
            bool operator>=(const pair<Type1, Type2> com) const{
                        return ((x >= com.x) && (y>= com.y));
          };
   
           bool operator<=(const pair<Type1,Type2> com)const{
                        return ((x<=com.x) && (y <=com.y));
           };
          
           void operator=(const pair<Type1,Type2> ass){
                     x = ass.x;
                     y = ass.y;
          };

          void swap(pair<Type1,Type2> swapped){
                    pair<Type1,Type2> temp(swapped);
                    swapped = *this;
                    *this = temp;
           };
                   
                
};


int main(){


return 0;

}
