#include<iostream>
using namespace std;


template<class T>
class number{
           
          public: 
                number(): data(T()){ };
                T get_data();
                void set_data(T d);
         private:
                T  data;
    };

template <class T>
T number<T>::get_data(){
           int d = this->data %10; 
           return d;
}

template <class T>
void number<T>::set_data(T d){

             this->data = d;
} 
int main(){

           number<int> n;
           std::cout<<"Number at the begin "<< n.get_data() <<std::endl;
//           n.set_data(20.0);
           std::cout<<"Number at the begin "<< n.get_data() <<std::endl;
           return 0;

}

