#include<iostream>
#include<mutex>
using namespace std;

class recur_mutex{

      std::mutex mut;
      int data;
 
      public:
              recur_mutex(){
                    data = 0;
              }

              void func1(){
                mut.lock();
                std::cout<<" Inside func1() " << data << std::endl;
                mut.unlock();
              }

              void func2(){
                mut.lock();
                func1();
                std::cout<<" Inside func2() " << data << std::endl;
                mut.unlock();
              }
              void func3(){
                mut.lock();
                func2(); 
                std::cout<<" Inside func2() " << data << std::endl;
                mut.unlock();
              }

};

int main(){

        recur_mutex m;
        m.func3();
        return 0;
 }
